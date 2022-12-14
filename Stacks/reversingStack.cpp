#include<iostream>
#include<stack>
using namespace std;

void transfer(stack<int> &s1,stack<int> &s2,int n) {
	for (int i = 0; i < n; i++)
	{
		/* code */
		s2.push(s1.top());
		s1.pop();
	}
}


void reverse(stack<int> &s1) {
	//helper stack
	stack<int> s2;

	int n = s1.size();

	for(int i=0;i<n;i++) {
		//pick the element at top and insert at bottom
		int x = s1.top();
		s1.pop();

		//transfer the n-i-1 elements from s1 to s2
		transfer(s1,s2,n-i-1);

		//insert the element x in s1
		s1.push(x);

		//transfer the n-i-1 elements from s2 to s1
		transfer(s2,s1,n-i-1);
	}
}

int main() {
	stack<int> s;
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);

	stack<int> s2;
	/*while(!s.empty()) {
		cout<<s.top()<<endl;
		s.pop();
	}*/

	reverse(s);
	while(!s.empty()) {
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}