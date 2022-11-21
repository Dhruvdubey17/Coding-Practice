#include<iostream>
using namespace std;
int main(){

	int **a;
	int r,c;
	cin>>r>>c;
	//creating a 2d array.
	a = new int*[r];

	for(int i=0;i<r;i++){
		a[i] = new int[c];
	}

	int val = 1;
	//for taking input or giving output in 2d-array 
	for (int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++){
			a[i][j] = val;
			cout<<a[i][j]<<" ";
			val++;
		}
		cout<<endl;
	}
}