#include<iostream>
#include<queue>
using namespace std;

class node {
public:
	int data;
	node *right,*left;

	node(int d) {
		data = d;
		right = NULL;
		left = NULL;
	}
};

void bfs(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<f->data<<",";
            q.pop();

            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    return;
}

node *BuildUsingArray(int *a,int s,int e) {
	if(s>e) {
		return NULL;
	}

	//Recursive case
	int mid = (s+e)/2;
	node *root = new node(a[mid]);
	root->left = BuildUsingArray(a,s,mid-1);
	root->right = BuildUsingArray(a,mid+1,e);

	return root;
}

int main() {
	int a[] = {1,2,3,4,5,6,7};
	int n = 7;
	node*root = BuildUsingArray(a,0,n-1);
	bfs(root);
}











