#include<iostream>
using namespace std;

int main() {
	int n,no;
	cin >> n; 

	//Array fixed size O(1) space
	int cnt[64] = {0};

	for(int i=0;i<n;i++) {
		cin >> no;
		//update the cnt array by extracting bits
		int j = 0;
		while(no > 0) {
			int last_bit = no&1;
			cnt[j] += last_bit;
			j++;
			no = no >> 1;
		}
	}

	int ans = 0;
	int p  = 1;


	//iterate over the array and convert binary into decimal
	for(int i=0;i<64;i++) {
		cnt[i] %= 3;
		ans += cnt[i] * p;
		p = p<<1;
	}
	cout << ans <<endl;
}