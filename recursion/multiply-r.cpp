#include<iostream>
using namespace std;
int calculate(int a,int n) {
	if(n == 0) {
		return 0;
	}
	else{
		return a + calculate(a,n-1);
	}
}


int main() {
	int a,n;
	cin >> a >> n;

	int ans = calculate(a,n);
	cout<<ans;

	return 0;
}