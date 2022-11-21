#include<iostream>
using namespace std;
int main()
{
	int n=9;
	int arr[1000];
	int sum=0;
	int maxsum=0;
	int left,right;
	for(int i = 0;i < n;i++)
		cin>>arr[i];



	for(int i = 0;i < n;i++){
		for(int j = i;j < n;j++){
			sum = 0;
			for(int k = i;k <= j;k++){
				sum += arr[k];
			}	
			if(sum>maxsum){
				maxsum=sum;
				left = i;
				right = j;
			}
		}
	}
	cout<<"Maximum sum of sub array is : "<<maxsum<<endl;
	for(int k=left;k<=right;k++)
		cout<<arr[k]<<",";
	return 0;
}