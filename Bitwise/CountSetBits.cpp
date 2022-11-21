#include<iostream>
using namespace std;
/*
not very optimised method
int countSetBits(int n) {
	int ans = 0;
	while(n>0) {
		ans += n&1;
		n = n >> 1;
	}
	return ans;
} */

//O(no of set bits)
int countSetBits(int n) {
	int ans = 0;

	while(n > 0) {
		n = n& (n-1);
		ans++;
	}
	return ans;
}

int main() {
	int n;
	cin >> n;

	cout << "Set Bits in n : "<<countSetBits(n) << endl;

	return 0;

}