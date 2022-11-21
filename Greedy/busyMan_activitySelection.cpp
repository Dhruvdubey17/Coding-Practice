#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2) {
	return p1.second < p2.second;
}

int main() {
	int t,n,s,e;//t-testcase,s-starttime,e-endtime,n-no of activities
	cin >> t;

	vector<pair<int,int> >v;

	while(t--) {
		cin >> n;
		for(int i=0;i<n;i++) {
			cin >> s >> e;
			v.push_back(make_pair(s,e));
		}
		//activity selection algo
		//sort according to end time;
		sort(v.begin(),v.end(),compare);

		//picking activities
		int res = 1;//no of activities
		int fin = v[0].second;

		for(int i=2;i<n;i++) {
			if(v[i].first >= fin) {
				fin = v[i].second;
				res++;
			}
		}

		cout<<res<<endl;

	v.clear();//to store new data;
	}


}