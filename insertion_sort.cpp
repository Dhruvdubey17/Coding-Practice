#include<iostream>
using namespace std;
void insert_sort(int a[],int n)
{
	for(int i=1;i<n;i++){
		int e = a[i];
		int j=i-1;
		while(j>=0 and a[j]>e){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=e;
	}
}
int main()
{
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	insert_sort(a,n);
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}