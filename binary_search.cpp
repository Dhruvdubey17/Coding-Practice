#include<iostream>
using namespace std;
int binary_search(int a[],int n,int key){
	int s = 0;
	int e = n-1;
	while(s<=n){
		int mid = (s+e)/2;
		if(a[mid]==key)
			return mid;
		else if(a[mid]>mid)
			e = mid-1;
		else
			s = mid+1;

	}
	return -1;
}



int main()
{
	int n;
	int i;
	int key;
	int arr[1000];
	cout<<"Enter the number of elements present in the array : ";
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter the number to be searched for : ";
	cin>>key;
	cout<<binary_search(arr,n,key)<<endl;
	return 0;
}