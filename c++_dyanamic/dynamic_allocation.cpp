#include<iostream>
using namespace std;
int main(){
	//Dynamic array allocation
	int n;
	cin>>n;

	int *a = new int[n];// new int[n]{0} for intialising array to zero
	cout<<sizeof(a)<<endl;

	//same as static
	for(int i = 0; i < n; i++){
		cin>>a[i];
		cout<<a[i]<<" ";
	}
	
	//free up space
	delete [] a;
	
	return 0;
}