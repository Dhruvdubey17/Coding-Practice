#include<iostream>
#include<vector>
using namespace std;

class MinMaxStack {
	vector<int>stack;
	vector<int>min_stack;
	vector<int>max_stack;

public:
	void push(int data) {
		int current_min = data;
		int current_max = data;

		if(min_stack.size()) {
			current_min = min(min_stack[min_stack.size()-1],data);
			current_max = max(max_stack[max_stack.size()-1],data);
		}
		min_stack.push_back(current_min);
		max_stack.push_back(current_max);
		stack.push_back(data);
	}

	int getMin() {
		return min_stack[min_stack.size()-1];
	}

	int getMax() {
		return max_stack[max_stack.size()-1];
	}

	int top() {
		return stack[stack.size()-1];
	}

	bool empty() {
		return stack.size() == 0;
	}

	void pop() {
		min_stack.pop_back();
		max_stack.pop_back();
		stack.pop_back();
	}
};

int main() {
	MinMaxStack s;
	s.push(8);
	s.push(9);
	s.push(7);
	s.push(5);
	s.push(4);
	s.push(2);
	s.push(3);

	cout<<s.getMax()<<" "<<s.getMin()<<endl;

	s.pop();
	s.pop();

	cout<<s.getMax()<<" "<<s.getMin()<<endl;

	cout<<s.top()<<endl;

}
