//Computing number of primes between two numbers for n queries
#include<iostream>
using namespace std;
#define ll long long

void prime_sieve(int *p){
	//marking all odd number's as prime
	for(int i = 3; i <= 1000000; i += 2){
		p[i] = 1;
	}

	//Sieve
	for(ll i = 3; i <= 1000000; i += 2){
		//if the current number is not marked it is prime
		if(p[i]==1){
			//marking all the multiples of i as not prime
			for(ll j = i*i; j <= 1000000; j += i)
				p[j] = 0;
		}
	}
	//Special case 
	p[2] = 1;
	p[1] = p[0] = 0;
}

int main()
{
	int p[1000005] = {0};
	prime_sieve(p);

	int csum[1000005] = {0};
	//precomputing number of primes upto number i

	for(int i=0;i<=1000000;i++)
		csum[i] = csum[i-1] + p[i];
	int q;
	cin>>q;
	while(q--){
		int a,b;
		cin>>a>>b;
		cout<<csum[b] - csum[a-1]<<endl;
	}
	return 0;
}