//longest subarray with sum k
//longest subarray with sum 0
#include<iostream>
#include<unordered_map>
using namespace std;

int longestSubArrayKsum(int a[],int n,int k){

	unordered_map<int,int>m;
	int pre = 0;

	int len = 0;
	for(int i=0;i<n;i++){
		pre += a[i];
		if(pre == k){
			len = max(len,i+1);
		}

		if(m.find(pre-k) != m.end()) {
			len = max(len,i - m[pre-k]);
		}
		else{
			//store the first occ
			m[pre-k] = i;
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

	cout<<"Key : ";
	int key;
	cin >> key;
	cout << "Longest Sub Array: " << longestSubArrayKsum(a,n,key) << endl;
}