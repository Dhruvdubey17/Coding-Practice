#include<iostream>
using namespace std;

int clearLastIbits(int n,int i) {
	int mask = (-1 << i);
	return n & mask;
}

int clearRangefromItoJ(int n,int i,int j) {
	int ones = (~0);
	int a = ones<<(j+1);
	int b = (1<<i) - 1;
	int mask = a | b;
	int ans = n&mask;

	return ans;
}


int main() {
	int n;
	cin >> n;
	int i;
	cin >> i;

	cout<<"Clear Last I bits : \n";//from pos i to 0;
	cout<<"Ans : "<<clearLastIbits(n,i)<<endl;


	cout<<"Clear bits from i to j\n";
	int j;
	cin >> j;
	cout<<"Ans : "<<clearRangefromItoJ(n,i,j);
}