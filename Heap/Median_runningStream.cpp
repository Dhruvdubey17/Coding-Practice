#include<iostream>
#include<queue>
using namespace std;

int main() {
	priority_queue<int>maxH;
	priority_queue<int,vector<int>,greater<int> >minH;

	int d;
	cin>>d;

	float median = d;
	minH.push(d);

	cout<<"Median : "<<median<<endl;

	cin >> d;

	while(d!=-1) {
		if(maxH.size()>minH.size()) {
			if(d<median) {
				minH.push(maxH.top());
				maxH.pop();
				maxH.push(d);
			}
			else{
				minH.push(d);
			}
			median = (minH.top() + maxH.top())/2.0;
		}

		else if(maxH.size()<minH.size()) {
			if(d>median) {
				maxH.push(minH.top());
				minH.pop();
				minH.push(d);
			}
			else {
				maxH.push(d);
			}
			median = (minH.top() + maxH.top())/2.0;
		}

		else {
			if(d<median) {	
				maxH.push(d);
				median = maxH.top();
			}
			else {
				minH.push(d);
				median = minH.top();
			}
		}
		cout<<"Median : "<<median<<endl;
		cin >> d;
	}
}