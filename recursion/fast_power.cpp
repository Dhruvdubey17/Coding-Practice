#include<iostream>
using namespace std;

int fastPower(int a,int n) {
	if(n == 0) {
		return 1;
	}

	//rec case
	int small_ans = fastPower(a,n/2);
	small_ans *= small_ans;

	if(n&1) {
		return small_ans*a;
	}

	return small_ans;
}

int main() {
	int a,n;
	cin>>a>>n;

	int ans = fastPower(a,n);

	cout<<ans<<endl;

	return 0;
}