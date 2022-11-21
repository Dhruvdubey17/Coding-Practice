#include<iostream>
#include<queue>

using namespace std;

int main() {
	int n;
	cin >> n;

	priority_queue<int>pq;//max heap
	priority_queue<int,vector<int>,greater<int> >minq;//min heap

	for(int i=0;i<n;i++) {
		int no;
		cin >> no;
		pq.push(no);
		minq.push(no);
	}

	while(!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}

	cout<<endl;

	while(!minq.empty()) {
		cout << minq.top() << " ";
		minq.pop();
	}
}