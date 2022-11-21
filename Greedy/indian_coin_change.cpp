#include<iostream>
#include<algorithm>

using namespace std;

void countCoin(int *coin,int money,int n) {
	int ans = 0;
	while(money>0) {
		int idx = upper_bound(coin,coin+n,money) - 1 - coin;
		cout<< coin[idx] << "+";
		money = money - coin[idx];
		ans++;
	}
	cout<<endl;
	cout<<"Total coins needed : "<<ans << endl;
}


int main() {

	int money;
	cin >> money;


	int coins[] = {1,2,5,10,20,50,100,200,500,2000};
	int n = sizeof(coins)/sizeof(int);

	countCoin(coins,money,n);
}