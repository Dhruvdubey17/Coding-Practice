////longest consecutive subsequence-3
//boht ways are o(N)
#include<iostream>
#include<unordered_set>
using namespace std;

int findLargestSeq(int a[],int n) {
	unordered_set<int>s;

	for(int i=0;i<n;i++) {
		s.insert(a[i]);//o(1)
	}

	int max_strk = 1;
	//iterate and target elements from which streaks can start
	for(int i=0;i<n;i++) {
		if(s.find(a[i]-1) == s.end()) {
			//a[i] is a starting point of the streak 
			int next_no = a[i] + 1;
			int strk_len = 1;
			while(s.find(next_no)!=s.end()) {
				next_no+=1;
				strk_len+=1;
			}
			max_strk = max(max_strk,strk_len);
		}
	}
	return max_strk;
}


int main() {
	int arr[] = {14,5,1,2,6,3,7,8,9,13,15,11,12,13,17};
	int n = sizeof(arr)/sizeof(int);

	cout << findLargestSeq(arr,n) << endl;
}