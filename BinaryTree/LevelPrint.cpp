#include<iostream>
using namespace std;

class node {
	public:
		int data;
		node*left;
		node*right;

	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};

node* BuildTree() {
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

int height(node*root) {
	if(root==NULL)
		return 0;

	int ls = height(root->left);
	int rs = height(root->right);
	return max(ls,rs) + 1;
}

void printKthlevelNode(node*root,int k) {
	if(root == NULL) 
		return;

	if(k == 1) {
		cout<<root->data<<" ";
		return;
	}

	printKthlevelNode(root->left,k-1);
	printKthlevelNode(root->right,k-1);
	return;
}

void printAllNodes(node*root) {
	int H = height(root);

	for(int i=1;i<=H;i++) {
		printKthlevelNode(root,i);
		cout<<endl;
	}
	return;
}

int main() {
	node*root = BuildTree();

	printAllNodes(root);

	return 0;
}










