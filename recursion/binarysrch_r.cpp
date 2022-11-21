#include<iostream>
using namespace std;
int bnary_srch(int *a,int s,int e,int key) {
	int m = (s+e)/2;

	if(e >= s) {
		if(a[m] == key) {
			return m;
		}
		else if(a[m] > key) {
			return bnary_srch(a,s,m-1,key);
		}
		return bnary_srch(a,m+1,e,key);
	}
	return -1;
}


int main() {
	int a[] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(int);
	int key;
	cin>>key;
	int ans = bnary_srch(a,0,n-1,key);
	if(ans == -1) {
		cout<<"Element is not present";
	}
	else
		cout<<"Element is present at index "<<ans;

	return 0;
}