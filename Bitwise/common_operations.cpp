#include<iostream>

using namespace std;

bool isOdd(int n) {
	return (n&1);
}

int getBit(int n,int i) {
	int mask = 1<<i;
	//if ith number is 1 then 1&1 = 1 else 1&0 = 0;
	//& the whole number will give an ans >0 if the ith bit is one;
	int bit = ((n&mask)>0)?1:0;

	return bit;
}

int setBit(int n,int i) {//we can take n by reference if we want to change the value in the main function too
	int mask = 1<<i;
	int ans = n | mask;
	return ans;
}

int clearBit(int n,int i) {
	int mask = ~(1<<i);
	int ans = n & mask;
	return ans;
}

void updateBit(int &n,int i,int v) {
	int mask = v<<i;
	int no = clearBit(n,i);//no is n after clearing ith bit
	//Or function is done to update the bit
	n = no | mask;
}


int main() {
	int n;
	cin >> n;

	cout<<"Odd or even operation\n";
	if(isOdd(n)) {
		cout<<"Odd\n";
	}
	else {
		cout<<"Even\n";
	}

	cout<<"\nGet ith bit operation\n";
	int i;
	cin >> i;
	cout << "ith bit is : "<<getBit(n,i)<<endl;

	cout<<"\nSetBit ith bit \n";
	cout<< "n after setbit ith bit : "<<setBit(n,i)<<endl;

	cout<<"\nclear ith bit\n";
	cout<<"After clearing ith bit n becomes : "<<clearBit(n,i)<<endl;

	cout<<"\nUpdate ith bit \n" ;
	int v;
	cin >> v;
	updateBit(n,i,v);
	cout<<"Final n after update : "<<n<<endl;


	return 0;
}