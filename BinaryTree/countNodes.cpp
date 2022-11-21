#include<iostream>
using namespace std;

class node {
public:
	int data;
	node *left;
	node *right;

	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};

node* BuildTree() {
	node *root;

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

int count(node*root) {
	if(root == NULL)
		return 0;

	return 1 + count(root->left) + count(root->right);
}

int height(node*root) {
	if(root == NULL)
		return 0;

	int ls = height(root->left);
	int rs = height(root->right);

	return max(ls,rs) +1;
}

int diameter(node*root) {
	if(root ==  NULL)
		return 0;

	int h1 = height(root->left);
	int h2 = height(root->right);

	int opt1 = h1+h2;
	int opt2 = diameter(root->left);
	int opt3 = diameter(root->right);

	return max(opt1,max(opt2,opt3));
}

int main() {
	node*root = BuildTree();

	cout<<count(root)<<endl;
	cout<<diameter(root)<<endl;


	return 0;
}