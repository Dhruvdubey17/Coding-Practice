#include<iostream>
using namespace std;

int fact(int n){
	//base case
	if(n==0){
		return 1;
	}

	//recursive call
	return n*fact(n-1);
	/*Above can be replaced by 
	int small_ans = fact(n-1);
	int ans = n*small_ans;
	return ans;*/
}
int main() {
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}