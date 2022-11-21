#include<iostream>
#include<set>
#include<map>

using namespace std;

class person_compare {
public:
	bool operator()(pair<string,int>p1,pair<string,int>p2) {
		return p1.second < p2.second;
	}	
};

int main() {
	int no_of_transactions,friends;
	cin>>no_of_transactions>>friends;

	string x,y;
	int amount;

	map<string,int>net;

	while(no_of_transactions--) {
		cin>>x>>y>>amount;

		if(net.count(x)==0) {
			net[x] = 0;
		}

		if(net.count(y)==0) {
			net[y] = 0;
		}

		net[x] -= amount;
		net[y] += amount;
	}


	multiset<pair<string,int>,person_compare >m;
	//iterate over the person, and those person who have non zero net
	for(auto p:net) {
		string person = p.first;
		int amt = p.second;

		if(net[person] != 0) {
			m.insert(make_pair(person,amt));
		}
	}


	//settlement part
	int cnt = 0;
	while(!m.empty()) {
		auto low = m.begin();
		auto high = prev(m.end());

		int debit = low->second;
	 	string debit_person = low->first;

	 	int credit = high->second;
	 	string credit_person = high->first;

	 	//lets pop from the multiset
	 	m.erase(low);
	 	m.erase(high);

	 	int settled_amt = min(-debit,credit);
	 	debit += settled_amt;
	 	credit -= settled_amt;

	 	//printing the transactions
	 	cout<<debit_person<<" will pay "<<settled_amt<<" to "<<credit_person<<endl;

	 	if(debit!=0) {
	 		m.insert(make_pair(debit_person,debit));
	 	}

	 	if(credit!=0) {
	 		m.insert(make_pair(credit_person,credit));
	 	}
	 	cnt++;
	}

	cout << "Total transactions : " << cnt <<endl;


	return 0;
}