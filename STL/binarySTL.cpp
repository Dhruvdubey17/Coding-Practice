#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[] = {10,20,30,40,50};
	int n = sizeof(a)/sizeof(int);
	cout<<n;
	int key;
	cin>>key;
	bool present= binary_search(a,a+n,key);
	if(present){
		cout<<"Present: ";
	}
	else
		cout<<"Absent";


	//for finding index we can use upper or lower bound
	/*for finding the number of
	occurances diff of upper bound
	and lower bound will give the answer*/

	int *lb = lower_bound(a,a+n,key);
	int idx = lb - a;
	if(present){
		cout<<idx<<endl;
		int *ub = upper_bound(a,a+n,key);
		cout<<"No of occurances: "<<ub-lb;
	}
	return 0;
}