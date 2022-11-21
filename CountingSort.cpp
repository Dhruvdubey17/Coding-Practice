#include<iostream>//Counting sort,takes O(N+ Range) time complexity
using namespace std;//Good for sorting arrays with Shorter ranges

void countSort(int *a,int n) {
	int largest = -1;

	//largest number in the array assuming n>0
	for(int i=0;i<n;i++) {
		largest = max(largest,a[i]);
	}

	//creat a frequency array;
	int *freq = new int[largest+1];
	for(int i=0;i<n;i++) {
		freq[a[i]]++;
	}

	//putting elements back into the array
	int j=0;
	for(int i=0;i<=largest;i++) {
		while(freq[i]>0) {
			a[j] = i;
			freq[i]--;		
			j++;
		}
	}
}

int main() {
	int a[] = {50,82,67,36,77,50,72,99,13};
	int n = sizeof(a)/sizeof(int);

	countSort(a,n);
	for(int i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}