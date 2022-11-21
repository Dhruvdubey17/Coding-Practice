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

int length(node*head) {
	int cnt = 0;
	while(head!=NULL){
		cnt++;
		head = head->next;
	}
	return cnt;
}

void insertAtHead(node*&head,int d){
	if (head == NULL)
	{
		head = new node(d);
		return;
	}

	node*n = new node(d);
	n->next = head;
	head = n;
}

void insertAtTail(node*&head,int d) {
	if(head==NULL){
		head = new node(d);
		return;
	}
	node*tail = head;
	while(tail->next!=NULL){
		tail = tail->next;
	}
	tail->next = new node(d);
	return;
}

void insertAtMiddle(node*&head,int data,int p){
	if(head==NULL or p==0) {
		insertAtHead(head,data);
		return;
	}
	else if(p>length(head)){
		insertAtTail(head,data);
		return;
	}
	else{
		int jump = 1;
		node*temp = head;
		while(jump<=p-1) {
			temp = temp->next;
			jump++;
		}
		node *n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

void print(node*head){
	while(head!=NULL) {
		cout<<head->data<<" ->";
		head = head->next;
	}
}

int main() {
	node*head = NULL;
	insertAtHead(head,4);
	insertAtHead(head,3);
	insertAtHead(head,2);
	insertAtHead(head,1);
	insertAtMiddle(head,5,3);
	insertAtTail(head,6);
	print(head);
	cout<<endl;
	insertAtMiddle(head,12,4);
	print(head);
}
















