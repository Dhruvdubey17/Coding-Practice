#include<iostream>
using namespace std;

int main() {
	int arr[10000];
	int n,i,val,diff;

	while(1) {
		//take input current test case
		int max_load = 0, load = 0;
		cin >> n;
		//stop taking input if -1 is input
		if(n==-1) {
			break;
		}

		for(int i=0;i<n;i++) {
			cin >> arr[i];
			load += arr[i];
		}

		//find load to be distributed equally 
		if(load%n != 0) {
			cout << "-1" << endl;
			continue;
		}
		load = load/n;

		diff = 0;
		//greedy step
		for(int i=0;i<n;i++) {
			//find the difference btw final load to be assigned and current load
			diff += arr[i] - load;
			int ans = max(diff,-diff);
			max_load = max(max_load,ans);
		}	
		cout << max_load << endl;
	}
	return 0;
}