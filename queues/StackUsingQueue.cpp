#include<iostream>
#include<queue>
using namespace std;

template<class T>
class Stack {
	queue<T>q1,q2;

public:
	void push(int data) {
		q1.push(data);
	}

	void pop() {
		//moving n-1 items to empty queue
		while(q1.size()>1) {
			int element = q1.front();
			q2.push(element);
			q1.pop();
		}
		//popping the last item
		q1.pop();

		//moving n-1 items back to their q1 i.e. in this case q1
		swap(q1,q2);
	}

	int top() {
		while(q1.size()>1) {
			int element = q1.front();
			q2.push(element);
			q1.pop();
		}

		int element = q1.front();
			q2.push(element);
			q1.pop();

		swap(q1,q2);
		return element;
	}

	int size() {
		return q1.size() + q2.size();
	}

	bool empty() {
		return size() == 0;
	}
};

int main() {
	Stack<int> s;
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);

	while(!s.empty()) {
		cout<<s.top() <<" ";
		s.pop();
	}

	return 0;
}










