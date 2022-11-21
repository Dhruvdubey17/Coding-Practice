#include<iostream>
using namespace std;

class node{
public:
	int data;
	node*next;

	node(int d){
		data = d;
		next = NULL;
	}
};


void insertAtHead(node*&head,int d){

	if(head==NULL){
		head = new node(d);
		return;
	}

	node*n = new node(d);
	n->next = head;
	head = n;
}

node* taking_input() {
	int d;
	cin>>d;
	node*head = NULL;
	while(d!=-1){
		insertAtHead(head,d);
		cin>>d;
	}
	return head;
}

node* MidPoint(node*head){
	if(head == NULL or head->next == NULL){
		return head;
	}

	node*fast = head->next;
	node*slow = head;

	while(fast != NULL and fast->next != NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

void print(node*head) {

	while(head!=NULL){
		cout<<head->data<<"->";
		head = head->next;
	}

}

int main() {
	node*head = taking_input();
	print(head);
	cout<<endl;
	node*mid = MidPoint(head);
	cout<<mid->data;

}