#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(a[j+1]<a[j])
				swap(a[j+1],a[j]);
		}
	}
}


int main()
{
	int n;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	bubble_sort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
}