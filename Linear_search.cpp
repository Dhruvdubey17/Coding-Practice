#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i;
	for (int i = 0; i < 10; i++)
		cin>>a[i];
	int num;
	cout<<"Enter the number to be searched: ";
	cin>>num;
	for(i = 0; i < 10; i++){
		if(num == a[i]){
			cout<<"The number is present at position : "<<i;
			break;
		}
	}
	if(i == 10)
		cout<<"The number is not present in the array.";
	return 0;
}