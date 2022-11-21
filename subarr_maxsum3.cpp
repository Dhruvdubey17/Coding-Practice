#include<iostream>
using namespace std;
int main()
{
	int n ;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
		cin>>a[i];


	//Using kadanes algorithm
	int current_sum=0;
	int max_sum=0;
	for(int i=0;i<n;i++){
		current_sum += a[i];
		if(current_sum<0)
			current_sum=0;
		max_sum = max(current_sum,max_sum);
	}
	cout<<"Maximum sum : "<<max_sum<<endl;;
	return 0;
}
