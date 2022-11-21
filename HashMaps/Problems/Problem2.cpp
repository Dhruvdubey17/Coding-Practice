//longest subarray with sum 0
#include<iostream>
#include<unordered_map>
using namespace std;

int longestSubArray(int a[],int n){

	unordered_map<int,int>m;
	int pre = 0;

	int len = 0;
	for(int i=0;i<n;i++){
		pre += a[i];
		if(pre == 0){
			len = max(len,i+1);
		}

		if(m.find(pre) != m.end()) {
			len = max(len,i - m[pre]);
		}
		else{
			m[pre] = i;
		}
	}
	return len;
}

int main(){
	int n;
	cin >> n;
	int a[n+1];

	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	cout << "Longest Sub Array: " << longestSubArray(a,n) << endl;
}