//O(NlogN)
#include<iostream>
#include<vector>
using namespace std;

bool minHeap = false;//set true for min heap and false for max heap

bool compare(int a,int b) {
	if(minHeap) {
		return a<b;
	}
	else {
		return a>b;
	}
}

void heapify(vector<int>&v,int idx,int size) {
	int left = 2*idx;
	int right = left+1;

	int min_idx = idx;
	int last = size-1;

	if(left<=last && compare(v[left],v[idx])) {
		min_idx = left;
	}

	if(right<=last && compare(v[right],v[min_idx])) {
		min_idx = right;
	}

	if(min_idx!=idx) {
		swap(v[idx],v[min_idx]);
		heapify(v,min_idx,size);
	}
}

void buildHeap(vector<int> &v) {
	for(int i=(v.size()-1)/2;i>=1;i--){
		heapify(v,i,v.size());
	}
}

void heapSort(vector<int> &v) {
	buildHeap(v);
	int n = v.size();

	//remove n-1 elements from the heap
	while(n>1) {
		swap(v[1],v[n-1]);
		n--;
		heapify(v,1,n);
	}
}

void print(vector<int> v) {
	for(int i=1;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main() {

	vector<int>v;
	int n,temp;
	cin>>n;

	v.push_back(-1);
	for(int i=0;i<n;i++) {
		cin>>temp;
		v.push_back(temp);
	}
	print(v);
	heapSort(v);
	print(v);
}