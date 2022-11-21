#include<iostream>
using namespace std;
void spiral_print(int a[][1000],int m,int n)
{
	int startrow = 0;
	int startcol = 0;
	int endrow = m-1;
	int endcol = n-1;

	//Printing 
	while(startrow<=endrow and startcol<=endcol){
		//First row

		for(int i=startcol;i<=endcol;i++){
			cout<<a[startrow][i]<<" ";
		}
		startrow++;


		//Last col

		for(int i=startrow;i<=endrow;i++)
			cout<<a[i][endcol]<<" ";
		endcol--;

		//Bottom row
		if(endrow > startrow){
		for(int i=endcol;i>=startcol;i--)
			cout<<a[endrow][i]<<" ";
		endrow--;
    }
		//Leftmost column
		if(endcol > startcol){
		for(int i=endrow;i>=startrow;i--)
			cout<<a[i][startcol]<<" ";
		startcol++;
	}


	}


}
int main()
{
	int m,n;
	cin>>m>>n;
	int a[1000][1000];
	int value = 1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=value;
			value++;
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	spiral_print(a,m,n);
	return 0;
}