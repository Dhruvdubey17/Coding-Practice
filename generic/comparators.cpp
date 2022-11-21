#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;

//templates+iterators+comparators
template<class ForwardIterator,class T,class Compare>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key,Compare cmp) {
	while(start != end) {
		if(cmp(*start,key)){
			return start;
		}
		start++;
	}
	return end;
}
class Book{

public:
	string name;
	int price;


Book(){

}
Book(string name,int price){
	this->name = name;
	this->price = price;
	}
};

class BookCompare{

public:
	bool operator()(Book A,Book B){
		if(A.name==B.name)
			return true;
		return false;
	}
};



int main() {
	Book b1("C++",100);
	Book b2("C++",200);
	Book b3("Python",110);

	list<Book> l;
	l.push_back(b1);
	l.push_back(b2);
	l.push_back(b3);

	Book bookToFind("C",200);

	BookCompare cmp;

	auto it = search(l.begin(),l.end(),bookToFind,cmp);

	if(it != l.end()) {
		cout<<"Book Available"<<endl;
	}
	else
		cout<<"Book not available"<<endl;

}