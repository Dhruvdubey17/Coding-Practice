#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(int);
	int key;
	cin>>key;
	auto it = find(a,a+n,key);
	cout<<it<<endl;
	int idx = it - a;
	if(idx==n){
		cout<<key<<" not present"<<endl;
	}
	else{
		cout<<"present at idx: "<<idx<<endl;
	}

}