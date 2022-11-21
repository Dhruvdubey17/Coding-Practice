#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s,int x) {
	if(s.empty()) {
		s.push(x);
		return;
	}

	int data = s.top();
	s.pop();
	insertAtBottom(s,x);
	s.push(data);
}

void recReverese(stack<int> &s) {
	if(s.empty()) {
		return;
	}

	int x = s.top();
	s.pop();
	recReverese(s);
	insertAtBottom(s,x);
}

int main() {
	stack<int>s;
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);

	recReverese(s);

	while(!s.empty()) {
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}