#include<iostream>
using namespace std;
 class node{
 public:
 	int data;
 	node*next;
 	node(int d) {
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

node* kthNodeFromBack(node*head,int pos_back){
	node*fast = head;
	node*slow = head;
	int jump = pos_back-1;
	while(jump--) {
		fast = fast->next;
	}
	while(fast!=NULL and fast->next!=NULL){
		fast = fast->next;
		slow = slow->next;
	}
	return slow;

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
	int pos ;
	cout<<"Enter the node you want from the back: ";
	cin>>pos;

	node*ans = kthNodeFromBack(head,pos);
	cout<<ans->data;

}