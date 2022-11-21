#include<iostream>
using namespace std;
int firstOcc(int *a,int n,int x) {
	if(n == 0) {
		return -1;
	}
	if(a[0] == x) {
		return 0;
	}
	int i = firstOcc(a+1,n-1,x);

	if(i == -1) {
		return -1;
	}

	return i + 1;
}


int lastOcc(int *a,int n,int x) {
	if(n == 0) {
		return -1;
	}
	int i = lastOcc(a+1,n-1,x);
	if(i == -1) {
		if(a[0] == x) {
			return 0;
		}
		else 
			return -1;
	}

	return i+1;
}




int main() {
	int a[] = {1,2,3,7,4,5,6,7,10};
	int key = 7;
	int n = sizeof(a)/sizeof(int);
	cout<<firstOcc(a,n,key)<<endl;
	cout<<lastOcc(a,n,key);

	return 0;
}