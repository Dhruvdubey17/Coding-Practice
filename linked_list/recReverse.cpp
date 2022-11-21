#include<iostream>
using namespace std;

class node{
public:
	node*next;
	int data;
	node(int d){
		data = d;
		next = NULL;
	}
};

void insertAtHead(node*&head,int d) {
	if(head == NULL) {
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

	while(d!=-1) {
		insertAtHead(head,d);
		cin>>d;
	}
	return head;
}

void print(node*head) {
	while(head!=NULL){
		cout<<head->data<<"->";
		head = head->next;
	}
}

node* recReverse(node*head) {
	if(head->next == NULL or head == NULL) {
		return head;
	}

	node*shead = recReverse(head->next);

	head->next->next = head;
	head->next = NULL;
	return shead;
}

void reverse(node*&head) {
	node*C = head;
	node*P = NULL;
	node*n;

	while(C!=NULL) {
		//making the next node
		n = C->next;
		//making the current node pointing to prev
		C->next = P;
		//update the P & C to take them 1 step forward
		P = C;
		C = n;
	}
	head = P;
}

ostream& operator<<(ostream &os,node*head) {
	print(head);
	return os;
}

istream& operator>>(istream &is,node*&head) {
	head = taking_input();
	return is;
}

int main() {
	node*head;
	cin>>head;
	cout<<head<<endl;
	head = recReverse(head);
	cout<<head;
}











