//run on coding blocks ide
#include<iostream>
#include<vector>
using namespace std;
vector<int> prime_sieve(int *p,int n){
	p[2] = 1;
	p[1] = p[0] = 0;
	for(int i = 3;i <= n;i+=2){
		p[i] = 1;
	}

	for(int i=3;i<=n;i+=2){
		if(p[i]==1){
			for(int j=i*i;j<=n;j+=2*i)
				p[j] = 0;
		}
	}
	vector<int> primes;
	primes.push_back(2);
	for(int i = 3;i <= n;i+=2){
		if(p[i] == 1){
			primes.push_back(i);
		}
	}
	return primes;
}
int no_of_divs(int n, vector<int> &primes){
	int i = 0;
	int p = primes[0];
	int cnt;
	int ans = 1;
	while(p*p <= n){
		if(n%p == 0){
			cnt = 0;
			while(n%p == 0){
				cnt++;
				n = n/p;
			}
			ans = ans * (cnt + 1);
		}
		i++;
		p = primes[i];
	}
	if(n != 1)
		ans = ans*2;
	return ans;
}

int main()
{
	int N = 1000000;
	int p[N];
	for(int i = 0; i <= N;i++)
		p[i] = 0;
	vector<int> primes = prime_sieve(p,1000);

	int t;
	cin>>t;
	while(t--){
		int no;
		cin>>no;
		int divs = no_of_divs(no,primes);
		cout<<divs<<endl;
	}
}