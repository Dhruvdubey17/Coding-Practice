#include<iostream>
#define ll long long
using namespace std;

ll fastModulo(int a, int b, int m) {
	ll res = 1;

	while (b > 0) {
		if (b & 1) {
			res = (res * a) % m;
		}
		a = a * a;
		b = b >> 1;
	}
	return res;
}



int main() {
	int a;
	cin >> a;
	int b;
	cin >> b;
	int m;
	cin >> m;


	cout << fastModulo(a, b, m) << endl;
}