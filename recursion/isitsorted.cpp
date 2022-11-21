#include<iostream>
using namespace std;

bool isSorted(int *a,int n) {
	//base case
	if(n == 0 or n == 1) {
		return true;
	}

	//rec case
	if(a[0] < a[1] and isSorted(a+1,n-1)) {
		return true;
	}
	return false;
}

int main() {
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}

	cout<<isSorted(a,n)<<endl;

	return 0;
}