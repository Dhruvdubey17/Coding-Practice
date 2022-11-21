//clockwise rotate
#include<iostream>
using namespace std;

void reverse(int *a,int beg,int end) {
	while(beg<end) {
		swap(a[beg],a[end]);
		beg++;
		end--;
	}
}
void rotate(int *a,int n,int d) {
	d = d%n;
	reverse(a,0,n-1);
	reverse(a,0,d-1);
	reverse(a,d,n-1);
}

int main() {
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	int d;
	cin>>d;

	rotate(a,n,d);
	for(int i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}


	return 0;
}