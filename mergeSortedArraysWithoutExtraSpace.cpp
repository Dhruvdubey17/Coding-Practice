#include <iostream>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution {
public:
	void merge(int a[], int b[], int n, int m) {
		int i = 0;
		while (i != (n)) {
			int flag = 0;
			int j = m - 1;
			while (j >= 0) {
				cout << "checking " << a[i] << " with " << b[j] << endl;
				if (a[i] > b[j]) {
					int temp = a[i];
					a[i] = b[j];
					b[j] = temp;
					flag  = 1;
					cout << "exchange " << a[i] << " and " << b[j] << endl;
					break;
				}
				else {
					j--;
					flag = 0;
				}
			}
			if (flag == 0) {
				i++;
			}
		}
	}
};

// { Driver Code Starts.
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, i;
		cin >> n >> m;
		int arr1[n], arr2[m];
		for (i = 0; i < n; i++) {
			cin >> arr1[i];
		}
		for (i = 0; i < m; i++) {
			cin >> arr2[i];
		}
		Solution ob;
		ob.merge(arr1, arr2, n, m);
		for (i = 0; i < n; i++) {
			cout << arr1[i] << " ";
		}
		for (i = 0; i < m; i++) {
			cout << arr2[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends
