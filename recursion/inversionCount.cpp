#include<iostream>
using namespace std;
int merge(int *a,int s,int e) {
	int mid = (s+e)/2;
	int temp[100];
	int i = s;
	int j = e;
	int k = s;
	int cnt = 0;

	while(i <= mid and j <= e) {
		if(a[i] <= a[j]) {
			temp[k] = a[i];
			k++;
			i++;
		}
		else {
			temp[k++] = a[j++];
			cnt += mid - i + 1;
		}
	}
	//filling up the array if some elements are still present
	if(s <= mid) {
		temp[k++] = a[i++];
	}
	if(j <= e) {
		temp[k++] = a[j++]; 
	}
	//copying all the elements
	for(int l = s;l <= e;l++) {
		temp[l] = a[l];
	}
	return cnt;
}

int inversionCount(int *a,int s,int e) {

	if(s >= e) {
		return 0;
	}

	int mid = (s+e)/2;

	int x = inversionCount(a,s,mid);
	int y = inversionCount(a,mid+1,e);
	int z = merge(a,s,e);//cross inversions

	return x + y + z;
}

int main() {
	int a[] = {1, 5, 2, 6, 3, 0};
	int n = sizeof(a)/sizeof(int);
	cout<<inversionCount(a,0,n-1)<<endl;

	return 0;
}