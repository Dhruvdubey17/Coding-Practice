#include<iostream>
using namespace std;
int profit(int n,int c,int *w,int *p) {
	if(n==0 or c==0) {
		return 0;
	}
	int ans = 0;
	int exc,inc;
	inc = exc = 0;

	if(w[n-1] <= c) {
		inc = p[n-1] + profit(n-1,c-w[n-1],w,p);
	}
	exc = profit(n-1,c,w,p);

	ans = max(inc,exc);
	return ans;

}

int main() {
	int wt[] = {1,2,3,5};
	int pr[] = {40,20,30,100};
	int n = 4;
	int c = 7;
	cout<<profit(n,c,wt,pr)<<endl;
}