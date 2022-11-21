#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

class Person {
public:
	int age;
	string name;

	Person(string n,int a) {
		name = n;
		age = a;
	}
};

class PersonCompare {
public:
	bool operator()(Person a,Person b) {
		return a.age < b.age;
	}
};


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	priority_queue<Person,vector<Person>,PersonCompare>pq;
	for(int i=0;i<n;i++) {
		string n;
		int a;
		cin>>n>>a;
		Person p(n,a);
		pq.push(p);
	}

	int k;
	cin>>k;

	for(int i=0;i<k;i++) {
		Person p = pq.top();
		cout<<p.name<<" "<<p.age;
		cout<<endl;
		pq.pop();
	}
	return 0;
}