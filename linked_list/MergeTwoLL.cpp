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

node* merger(node*a,node*b){
	if(a==NULL){
		return b;
	}
	else if(b==NULL){
		return a;
	}

	node*c = NULL;

	if(a->data<b->data){
		c = a;
		c->next = merger(a->next,b);
	}
	else{
		c = b;
		c->next = merger(a,b->next);
	}
	return c;
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
	node*head1;
	node*head2;
	cin>>head1>>head2;
	cout<<head1<<endl<<head2<<endl;

	node* MergeHead = merger(head1,head2);
	cout<<MergeHead<<endl;
}


