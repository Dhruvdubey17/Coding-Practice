#include<iostream>
using namespace std;
void merge(int *a,int s,int e) {
	int mid = (s+e)/2;
	int i = s;
	int j = mid + 1;
	int k = s;

	int temp[100];

	while(i<=mid and j<=e) {
		if(a[i] < a[j]) {
			temp[k++] = a[i++];
		}
		else
			temp[k++] = a[j++];
	}
	while(i<=mid) {
		temp[k++] = a[i++];
	}
	while(j<=e) {
		temp[k++] = a[j++];
	}
	//copy all elements to orignal array
	for(int l=s;l<=e;l++) {
		a[l] = temp[l];
	}
}
void mergeSort(int *a,int s,int e) {
	//base case
	if(s >= e)
		return;

	int mid = (s+e)/2;

	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);

	merge(a,s,e);
}

int main() {
	int n;
	cin >> n;
	int a[100];
	for(int i=0;i<n;i++)
		cin >> a[i];

	mergeSort(a,0,n-1);

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

	return 0;
}