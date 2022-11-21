#include<iostream>
using namespace std;
int storeOcc(int *a,int i,int j,int n,int x,int *out) {
	if(i == n) {
		return j;
	}

	if(a[i] == x) {
		out[j] = i;
		return storeOcc(a,i+1,j+1,n,x,out);
	}

	return storeOcc(a,i+1,j,n,x,out);
}
void allOcc(int *a,int i,int n,int x) {
	if(i == n) {
		return;
	}

	if(a[i] == x) {
		cout << i << " ";
	}
	allOcc(a,i+1,n,x);
}


int main() {
	int a[] = {1,2,3,7,4,7,6,7,8,9,6,7,2};
	int n = sizeof(a)/sizeof(int);
	int key = 7;

	allOcc(a,0,n,key);
	cout<<endl;

	int output[10000];
	int cnt = storeOcc(a,0,0,n,key,output);
		cout << "Count : " << cnt << endl;
	
	for(int k = 0; k < cnt; k++) {
		cout << output[k] <<" ";
	}
	return 0;
}