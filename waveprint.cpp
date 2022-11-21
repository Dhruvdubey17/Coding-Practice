#include<iostream>
using namespace std;
int main()
{
	int r,c;
	int value = 1;
	cin>>r>>c;
	int a[1000][1000];
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			a[i][j] = value;
			value++;
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i = 0;i<c;i++){
		if(i%2==0){
			for(int j=0;j<r;j++)
				cout<<a[j][i]<<" ";
		}
		else{
			for(int j=r-1;j>=0;j--)
				cout<<a[j][i]<<" ";
		}


	}
	return 0;
}