#include<iostream>
using namespace std;


int main() {
	int n;
	int a[100001];
	cin >> n;

	int Xor = 0;
	for(int i=0;i<n;i++) {
		int no;
		cin >> no;
		a[i] = no;
		Xor = Xor^no;
	}

	int temp = Xor;
	int pos = 0;
	while((temp&1) != 1) {
		temp = temp >> 1;
		pos++;
	} 

	int mask = 1<<pos;

	int x = 0;
	int y = 0;

	//find the numbers which have set bit at pos 
	for(int i=0;i<n;i++) {
		if((a[i]&mask) > 0) {
			x  = x^a[i];
		}
	}

	y = Xor^x;
	cout << "Unique Numbers are : "<<min(x,y) <<" and " <<max(x,y)<< endl;
}