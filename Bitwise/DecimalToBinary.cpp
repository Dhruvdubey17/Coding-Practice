#include<iostream>
using namespace std;

void decimalToBinary(int n) {
	int p = 1;
	int ans = 0;

	while(n > 0) {
		int last_bit = n&1;
		ans += p*last_bit;

		p = p*10;
		n = n>>1;
	}

	cout << "Binary Representation : "<<ans <<endl;
}


int main() {
	int n;

	cin >> n;
	decimalToBinary(n);
}