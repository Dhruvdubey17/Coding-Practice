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


void printAtKthLevel(node*root,int k) {
	if(root==NULL) {
		return ;
	}
	if(k==0){
		cout<<root->data<<" ";
		return;
	}
	printAtKthLevel(root->left,k-1);
	printAtKthLevel(root->right,k-1);
	return;
}

int printAtDistanceK(node*root,node*target,int k) {
	if(root==NULL) {
		return -1;
	}


	//reach the target node
	if(root == target) {
		printAtKthLevel(target,k);
		return 0;
	}


	//next step->ancestor
	int DL = printAtDistanceK(root->left,target,k);

	if(DL != -1) {
	//Again 2 cases
	//Ancestor itself or go to the right ancestor//ancestor is parent node
		if(DL+1==k) {
			cout<<root->data<<" ";
		}
		else  {
			printAtKthLevel(root->right,k-DL-2);
		}
		return 1+DL;
	}

	int DR = printAtDistanceK(root->right,target,k);

	if(DR != -1) {
	//Again 2 cases
	//Ancestor itself or go to the right ancestor//ancestor is parent node
		if(DR+1==k) {
			cout<<root->data<<" ";
		}
		else  {
			printAtKthLevel(root->left,k-DL-2);
		}
		return 1+DR;
	}

	//Node was not present anywhere
	return -1;
}

int main() {
	node*root = buildTree();
	printAtDistanceK(root,root->left->left,2);
}
















