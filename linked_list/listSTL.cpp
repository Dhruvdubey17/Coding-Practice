#include<iostream>
#include<cstring>
#include<list>
using namespace std;
//run on coding blocks ide
int main() {
	list<string> l{"orange","mango","apple","kiwi"};
	for(string s:l) {
		cout<<s<<"-->";
	}
	cout<<endl;

    l.remove("mango");
    for(string s:l) {
		cout<<s<<"-->";
	}
	cout<<endl;

    l.push_back("guava");//to insert element at back and push_front to insert element at front
    
    l.sort(); //sorts the list

    for(string s:l) {
		cout<<s<<"-->";
	}
	cout<<endl;

    l.reverse(); //reverses the list

    for(string s:l) {
		cout<<s<<"-->";
	}
	cout<<endl;

    l.pop_back();//removes last element
    l.pop_front();//removes first element 

    for(string s:l) {
		cout<<s<<"-->";
	}
	cout<<endl;

    l.push_back("lemon");
    l.push_back("orange");
    l.push_front("apple");

    l.remove("kiwi"); //to remove certain element
    /*string f;
    cin>>f;
    l.remove(f);*/

    for(string s:l) {
		cout<<s<<"-->";
	}
	cout<<endl;

    auto it = l.begin();
    it++;

    l.push_back("mango");
    l.push_back("melon");

    l.erase(it);

    for(string s:l) {
		cout<<s<<"-->";
	}
	cout<<endl;
    l.insert(it,"seb");

    for(string s:l) {
		cout<<s<<"-->";
	}
	cout<<endl;
}