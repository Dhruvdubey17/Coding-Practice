#include<iostream>
using namespace std;
/*one way is using for loop 
void bubbleSort(int *a,int n) {
	//base case
	if(n == 1) {
		return;
	}
	//rec case 
	for(int j = 0;j < n-1; j++) {
		if(a[j]>a[j+1]) {
			swap(a[j],a[j+1]);
		}
	}
	return bubbleSort(a,n-1);
} */

//other way without using for loop and only recursion

void bubbleSort(int *a,int j,int n) {
	//base case
	if(n == 1) {
		return;
	}
	//rec case
	if(j == n - 1) {
		return bubbleSort(a,0,n - 1);
	}

	if(a[j] > a[j + 1]) {
		swap(a[j],a[j+1]);
	}
	bubbleSort(a,j + 1,n);
}

int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i = 0; i < n;i++) {
		cin>>a[i];
	}

	bubbleSort(a,0,n);
	for(int i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}



	return 0;
}