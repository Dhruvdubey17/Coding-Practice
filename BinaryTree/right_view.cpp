#include<iostream>
using namespace std;

class node{
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

node* buildTree() {
	int d;
	cin>>d;

	if(d==-1) {
		return NULL;
	}

	node*root = new node(d);
	root->left = buildTree();
	root->right = buildTree();

	return root;
}

void printRightView(node*root,int &maxLevel,int level) {
	if(root == NULL) {
		return;
	}

	if(maxLevel<level) {
		//have discovered a new level
		cout<<root->data<<" ";
		maxLevel = level;
	}

	printRightView(root->right,maxLevel,level+1);
	printRightView(root->left,maxLevel,level+1);
}

int main() {
	node*root = buildTree();
	int maxLevel = -1;
	printRightView(root,maxLevel,0);


	return 0;
}