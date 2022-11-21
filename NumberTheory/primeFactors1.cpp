//optimized approach for calculating prime factors
#include<iostream>
#include<vector>
using namespace std;
void prime_factors(int n){
	vector<pair<int,int> >factors;
	int cnt;
	for(int i=2;i*i<n;i++){
		if(n%i==0){
			//deviding by i till its divisible
			cnt = 0;
			while(n%i==0){
				cnt++;
				n = n/i;
			}
			factors.push_back(make_pair(i,cnt));
		}
	}
	//whatever left is a prime number in itself
	if(n!=1)
		factors.push_back(make_pair(n,1));
	//printing the factors
	for(auto p : factors)
		cout<<p.first<<"^"<<p.second<<endl;
	return;
}
int main(){
	int n;
	cin>>n;
	prime_factors(n);
	return 0;
}