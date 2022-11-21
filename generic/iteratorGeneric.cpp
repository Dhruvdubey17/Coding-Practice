#include<iostream>
#include<list>
using namespace std;

template<class ForwardIterator,class T>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key) {

	while(start != end) {
		if(*start==key) {
			return start;
		}
		start++;
	}
	return end;
}

int main() {

	list<int> l;

	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(5);
	//if iterator prints the key itself it means we were able to find it 
	auto it = search(l.begin(),l.end(),3);
	cout<<*it<<endl;

	return 0;

}
