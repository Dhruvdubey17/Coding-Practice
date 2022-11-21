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

ostream &operator<<(ostream &os,node*head) {
	print(head);
	return os;
}

istream &operator>>(istream &is,node*head) {
	head = taking_input();
	return is;
}

void print(node*head) {

	while(head!=NULL){
		cout<<head->data<<"->";
		head = head->next;
	}

}

int main() {
	node*head;
	node*head2;
	cin>>head>>head2;
	cout<<head<<head2;
}








