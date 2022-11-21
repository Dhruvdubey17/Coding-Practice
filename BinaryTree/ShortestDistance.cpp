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

node* buildTree() {
	node*root;
	int d;
	cin>>d;

	if(d==-1) {
		return NULL;
	}

	root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

node* leastCommonAncestor(node*root,int a,int b) {//lca
	if(root == NULL) {
		return NULL;
	}

	if(root->data == a and root->data == b) {
		return root;
	}

	node*leftans = leastCommonAncestor(root->left,a,b);
	node*rightans = leastCommonAncestor(root->right,a,b);


	if(leftans != NULL and rightans != NULL) {
		return root;
	}

	if(leftans != NULL) {
		return leftans;
	}
	return rightans;
}

int search(node*root,int key,int level) {
	if(root==NULL) {
		return -1;
	}

	if(root->data == key) {
		return level;
	}

	int left = search(root->left,key,level+1);
	if(left!=-1)
		return left;
	return search(root->right,key,level+1);

}

int findDistance(node*root,int a,int b) {
	node*lca = leastCommonAncestor(root,a,b);

	int l1 = search(lca,a,0);
	int l2 = search(lca,b,0);

	return l1+l2;
}

int main() {
	node* root = buildTree();
	cout<<"Distance between given nodes : "<<findDistance(root,2,3);
	return 0;
}














