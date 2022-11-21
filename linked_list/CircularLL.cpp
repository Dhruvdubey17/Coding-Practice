#include<iostream>
using namespace std;

class node{
public:
	int data;
	node *next;

	node(int d){
		data = d;
		next = NULL;
	}
};

void insertAtHead(node*&head,int d) {
	node* n = new node(d);
	node* temp = head;

	n->next = head;
	if(temp!=NULL){
		while(temp->next!=head) {
			temp = temp->next;
		}
		temp->next = n;
	}
	else{
		n->next = n;
	}
	head = n;
}
node* getnode(node*head,int data) {

	node*temp = head;
	//for all nodes except last node
	while(temp->next!=head) {
		if(temp->data == data) {
			return temp;
		}
		temp = temp->next;
	}
	//out of the loop ,last node
	if(temp->data == data){
		return temp;
	}
	return NULL;

}
void deleteNode(node*&head,int data) {

	node*del = getnode(head,data); 
	if(del == NULL) {
		return;
	}
	//otherwise
	if(head == del) {
		head = head->next;
	}

	node*temp = head;
	while(temp->next != del) {
		temp = temp->next;
	}
	temp->next = del->next;
	delete del;

}

void print(node*head) {
	node*temp = head;
	while(temp->next!=head) {
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<temp->data<<endl;
	return;
}


int main() {
	node*head = NULL;
	insertAtHead(head,50);
	insertAtHead(head,40);
	insertAtHead(head,30);
	insertAtHead(head,20);
	insertAtHead(head,10);
	insertAtHead(head,5);
	print(head);
	deleteNode(head,20);

	print(head);
}
