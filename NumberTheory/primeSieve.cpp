#include<iostream>
using namespace std;
#define ll long long 

void prime_sieve(int *p,int n){
	//marking all odd number's as prime
	for(int i = 3; i <= n; i += 2){
		p[i] = 1;
	}

	//Sieve
	for(ll i = 3; i <= n; i += 2){
		//if the current number is not marked it is prime
		if(p[i]==1){
			//marking all the multiples of i as not prime
			for(ll j = i*i; j <= n; j += i)
				p[j] = 0;
		}
	}
	//Special case 
	p[2] = 1;
	p[1] = p[0] = 0;
}

int main(){

	int n;
	cin>>n;

	int p[1000000] = {0};
	prime_sieve(p,n);
	for(int i=0;i<=n;i++){
		if(p[i]==1){
			cout<<i<<" ";
		}
	}
	return 0;
}