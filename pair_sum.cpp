#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	int sum;
	cout<<"Enter the value of sum : ";
	cin>>sum;
	int i = 0;
	int j = n-1;
	while(i<j){
		int csum = a[i] + a[j];
		if(csum<sum)
			i++;
		else if(csum>sum)
			j--;
		else if(csum==sum){
			cout<<a[i]<<" and "<<a[j]<<endl;;
			i++;
			j--;
		}
	}
	return 0;
}