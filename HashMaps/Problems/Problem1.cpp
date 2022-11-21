//check if there is  subarray with sum 0
//use unordered map for almost o(1)
//right now it is O(N)
#include<iostream>
#include<unordered_set>
using namespace std;

bool checkSum(int a[],int n) {
	unordered_set<int> s;

	int pre = 0;
	for(int i=0;i<n;i++) {
		pre += a[i];
		//check if the sum becomes zero or the number was already present in the set
		if (pre==0 or s.find(pre)!=s.end())
		{
			return true;
		}
		s.insert(pre);
	}
	return false;
}


int main() {
	int n;
	cin >> n;
	int a[n+1];

	for(int i=0;i<n;i++){
		cin >> a[i];
	}


	if(checkSum(a,n)) {
		cout << "Yes" << endl;
	}

	else {
		cout << "No"<<endl;
	}
}