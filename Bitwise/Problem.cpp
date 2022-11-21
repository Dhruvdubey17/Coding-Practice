/*Replace n bits in N by M
Example
N = 10000000000
M = 10101, i = 2, j = 6
Output = 10001010100 */
#include<iostream>
using namespace std;

int clearRangefromItoJ(int n,int i,int j) {
	int ones = (~0);
	int a = ones<<(j+1);
	int b = (1<<i) - 1;
	int mask = a | b;
	int ans = n&mask;

	return ans;
}

int replaceBits(int n,int m,int i,int j) {
	//first we clear the range from i to j
	int n_ = clearRangefromItoJ(n,i,j);
	int ans = n_ | (m<<i); //ORing with the m<<i
	return ans;
}

int main() {
	int n;
	cin >> n;

	int m,i,j;
	cin >> m >> i >> j;

	cout<<"Answer : " << replaceBits(n,m,i,j) << endl;


	return 0;
}
