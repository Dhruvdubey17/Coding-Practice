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
	if(head == NULL){
		head = new node(d);
		return;
	}

	node*n = new node(d);
	n->next = head;
	head = n;

}

void deleteHead(node*&head) {
	if(head==NULL){
		return;
	}
	node*temp = head->next;
	delete head;
	head = temp;
}


void print(node*head) {
	while(head != NULL) {
		cout<<head->data<<"->";
		head = head->next;
	}
	cout<<endl;
}

int main() {
	node*head = NULL;
	insertAtHead(head,4);
	insertAtHead(head,3);
	insertAtHead(head,2);
	insertAtHead(head,1);

	print(head);

	deleteHead(head);

	print(head);
}