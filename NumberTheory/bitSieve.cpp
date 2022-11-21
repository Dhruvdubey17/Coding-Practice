#include<iostream>
#include<bitset>
#include<vector>
using namespace std;

bitset<1000000>b;
const int n = 1000000;
vector<int>primes;

void sieve() {
	b.set();//set all the bit to 1;

	b[0] = b[1] = 0;

	for (long long int i = 2; i < n; i++) {
		if (b[i]) {
			primes.push_back(i);
			for (long long int j = i * i; j < n; j += i) {
				b[j] = 0;
			}
		}
	}
}

int main() {
	int num;
	cin >> num;

	sieve();

	for (int i = 0; i < num; i++) {
		cout << primes[i] << " ";
	}

	return 0;
}
