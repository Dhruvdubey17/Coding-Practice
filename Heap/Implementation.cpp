#include<iostream>
#include<vector>

using namespace std;

class Heap{
	vector<int> v;
	bool minHeap;

	bool compare(int a,int b) {
		if(minHeap) {
			return a<b;
		}
		else {
			return a>b;
		}
	}

	void heapify(int idx) {
		int left = 2*idx;
		int right = left+1;

		int min_idx = idx;
		int last = v.size()-1;

		if(left<=last && compare(v[left],v[idx])) {
			min_idx = left;
		}

		if(right<=last && compare(v[right],v[min_idx])) {
			min_idx = right;
		}

		if(min_idx!=idx) {
			swap(v[idx],v[min_idx]);
			heapify(min_idx);
		}
	}



public:
	Heap(int default_size = 10,bool type = true) {
		v.reserve(default_size);
		v.push_back(-1);
		minHeap = type;
	}

	void push(int d) {
		v.push_back(d);
		int idx = v.size()-1;
		int parent = idx/2;

		//keep pushing to the top until u reach a root node or stop midway
		while(idx>1 && compare(v[idx],v[parent])) {
			swap(v[idx],v[parent]);
			idx = parent;
			parent = parent/2;
		}
	}

	int top() {
		return v[1];
	}

	void pop() {
		int last = v.size()-1;
		swap(v[1],v[last]);
		v.pop_back();
		heapify(1);
	}

	bool empty() {
		return v.size() == 1;
	}
};

int main() {

	Heap min_heap;
	int n,no;

	cin>>n;
	cout<<"Enter the minimum heap\n";
	for(int i=0;i<n;i++) {
		cin>>no;
		min_heap.push(no);
	}

	while(!min_heap.empty()) {
		cout<<min_heap.top()<<" ";
		min_heap.pop();
	}

	cout<<endl;

	Heap max_heap(10,false);
	cin>>n;

	cout<<"Enter the maximum heap\n";
	for(int i=0;i<n;i++) {
		cin>>no;
		max_heap.push(no);
	}

	while(!max_heap.empty()) {
		cout<<max_heap.top()<<" ";
		max_heap.pop();
	}

}









