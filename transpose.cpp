#include<iostream>
using namespace std;
/* 
void transpose(int a[][1000],int n)
{
	for(int i=0;i<;i++){
		reverse(a[i],a[i]+n);
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j)
			swap(a[i][j],a[j][i]);
		}
	}
}



*/
void transpose(int a[][1000],int n)
{
	//Reversing the row elements
	for(int i=0;i<n;i++){
		int sc = 0;
		int ec = n-1;//sc = start column and ec = end coloumn
		while(sc<ec){
			swap(a[i][sc],a[i][ec]);
			sc++;
			ec--;
		}
	}
	//to take transpose
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j)
			swap(a[i][j],a[j][i]);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int a[1000][1000];
	int val=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=val;
			val++;
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	transpose(a,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}