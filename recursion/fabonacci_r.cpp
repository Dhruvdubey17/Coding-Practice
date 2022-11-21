#include<iostream>
using namespace std;

int f(int n){
	//base call
	if(n==0 or n==1){
		return n;
	}

	//rec call
	return f(n-1) + f(n-2);
}
int main() {
	int n;
	cin>>n;

	cout<<f(n)<<endl;

	return 0;
}