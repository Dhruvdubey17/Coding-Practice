#include<iostream>
using namespace std;


int main() {
	float x = 1.0;

	int people = 0;

	float num = 365; //numerator
	float denum = 365; //denominator

	float p;
	cin >> p;//get the percent from user

	if (p == 1.0) {
		cout << "People : 366\n";
		return 0;
	}

	while (x > 1 - p) {
		x = x * (num / denum);
		num--;
		people++;

		cout << "People : " << people << " and x : " << x << endl;
	}
	return 0;
}