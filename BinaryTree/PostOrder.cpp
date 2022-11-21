#include<iostream>
using namespace std;

class node {
public:
	int data;
	node*right;
	node*left;

	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}

};

node *BuildTree() {
	node*root;
	int d;
	cin>>d;

	if(d==-1) {
		return NULL;
	}

	root = new node(d);
	root->left = BuildTree();
	root->right = BuildTree();
	return root;
}
//printing inorder i.e. left root right
void printIN(node*root) {
	if(root == NULL)
		return;

	printIN(root->left);
	cout<<root->data<<" ";
	printIN(root->right);
}

//printing postOrder i.e. left right root 
void printPost(node*root) {
	if(root == NULL)
		return;

	printPost(root->left);
	printPost(root->right);
	cout<<root->data<<" ";
}

int main() {
	node *root = BuildTree();

	printIN(root);
	cout<<endl;
	printPost(root);


	return 0;
}








