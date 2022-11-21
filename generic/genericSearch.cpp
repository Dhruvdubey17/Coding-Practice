#include<iostream>
using namespace std;

template<class T> //or template<typename T>
int search(T *a,int n,T key) {
	for(int i = 0;i < n;i++) {
		if(a[i]==key) {
			return i;
		}
	}
	return n;
}


int main() {
	int a[] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(int);
	int key = 4;
	cout<<search(a,n,key)<<endl;


	float arr[] = {1.1,1.2,1.3,1.4};
	float k = 1.3;
	cout<<search(arr,4,k);
}