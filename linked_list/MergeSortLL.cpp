#include<iostream>
using namespace std;

class node {
public:
	int data;
	node*next;

	node(int d) {
		data = d;
		next = NULL;
	}
};


void insertAtHead(node*&head, int d) {

	if (head == NULL) {
		head = new node(d);
		return;
	}

	node*n = new node(d);
	n->next = head;
	head = n;
}

node* merger(node*a, node*b) {
	if (a == NULL) {
		return b;
	}
	else if (b == NULL) {
		return a;
	}

	node*c = NULL;

	if (a->data < b->data) {
		c = a;
		c->next = merger(a->next, b);
	}
	else {
		c = b;
		c->next = merger(a, b->next);
	}
	return c;
}



node* taking_input() {
	int d;
	cin >> d;
	node*head = NULL;
	while (d != -1) {
		insertAtHead(head, d);
		cin >> d;
	}
	return head;
}

node* MidPoint(node*head) {
	if (head == NULL or head->next == NULL) {
		return head;
	}

	node*fast = head->next;
	node*slow = head;

	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

node* MergeSort(node*head) {
	if (head == NULL or head->next == NULL) {
		return head;
	}
	//rec case
	//1. Breaking into 2
	node* mid = MidPoint(head);
	node*a = head;
	node*b = mid->next;

	mid->next = NULL;

	//2. rec sort the two parts
	a = MergeSort(a);
	b = MergeSort(b);

	//3. Merging them
	node* c = merger(a, b);
	return c;
}

void print(node*head) {

	while (head != NULL) {
		cout << head->data << "->";
		head = head->next;
	}

}

ostream& operator<<(ostream &os, node*head) {
	print(head);
	return os;
}

istream& operator>>(istream &is, node*&head) {
	head = taking_input();
	return is;
}


int main() {
	node*head;
	cin >> head;

	node*Sorted = MergeSort(head);
	cout << Sorted;

}