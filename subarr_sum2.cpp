#include<iostream>
using namespace std;
int main()
{
	int n=9;
	int a[1000];
	int cumsum[1000] = {0};
	int sum = 0;
	int maxsum=0;
	int left,right;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cumsum[i] = cumsum[i-1] + a[i]; 
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			sum = cumsum[j] - cumsum[i-1];
		if(sum>maxsum){
			maxsum=sum;
			left = i;
			right = j;
		}
		}
	}
	cout<<maxsum<<endl;
	for(int k=left;k<=right;k++)
		cout<<a[k]<<",";
	return 0;
}