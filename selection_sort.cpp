#include<iostream>
using namespace std;
void selection_sort(int a[],int n)
{
	int j,i;
	for(i=0;i<n-1;i++){
		int min_idx=i;
		for(j=i;j<=n-1;j++){
			if(a[j]<a[min_idx])
				min_idx=j;
		}
		swap(a[i],a[min_idx]);
	}
}
int main()
{
	int n,i;
	int arr[1000];
	cout<<"Enter the number of elements present in the array : ";
	cin>>n;
	cout<<"Enter the array:"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
	selection_sort(arr,n);
	for(i=0;i<n;i++)
		cout<<arr[i]<<endl;
	return 0;
}