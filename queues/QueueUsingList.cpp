#include<iostream>
#include<list>
using namespace std;

class Queue {
	list<int> l;
	int cs;

public:
	Queue() {
		cs = 0;
	}

	void push(int data) {
		l.push_back(data);
		cs++;
	} 

	bool empty() {
		return cs == 0;
	}

	void pop() {
		if(!empty()) {
			l.pop_front();
			cs--;
		}
	}
	int top() {
		return l.front();
	}
};

int main() {

	Queue q;

	for(int i=1;i<=10;i++) {
		q.push(i);
	}

	while(!q.empty()) {
		cout<<q.top()<<" ";
		q.pop();
	}
	return 0;
}