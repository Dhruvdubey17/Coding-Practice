//Compile in coding blocks.ide

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>d{1,2,3,4,5};

	//Push back method - puts element at last(1) for most time
	d.push_back(6);


	//Deletes last element
	d.pop_back();

	//Insert some elements in the middle
	d.insert(d.begin() + 3,4,100);

	//erase elements from the middle
	d.erase(d.begin() +2);
	d.erase(d.begin()+2,d.begin()+5);

	//size
	cout<<d.size()<<endl;
	cout<<d.capacity()<<endl;

	//to avoid the shrink
	d.resize(18);//if size is inc then more memory will be allocated
	cout<<d.capacity()<<endl;

	


	for(int x:d){
		cout<<x<<" ";
	}

	//remove all the vector
	d.clear();
	cout<<d.size()<<endl;

	d.push_back(10);
	d.push_back(11);

	cout<<d.front()<<endl;//gives the first element
	cout<<d.back()<<endl;//gives the last element 

	d.clear();

	//Using reserve - as doubling memory is an expensive opertation.
	vector<int> v;
	v.reserve(100);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int no;
		cin>>no;
		v.push_back(no);
		cout<<"ChangeInCapacity : "<<v.capacity();
	}

	for(int x:v){
		cout<<x;
	}


	return 0;
}