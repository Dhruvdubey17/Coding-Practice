#include<iostream>
using namespace std;
void removeDuplicate(char a[]){
	int l = strlen(a);
	int prev = 0;
	if(l == 0 or l == 1 )
		return;


	for(int current = 1;current < l;current++){
		if(a[current] != a[prev]){
			prev++;
			a[prev] = a[current];
		}
	}
	a[prev + 1]='\0';
	return;
}
int main(){
	char a[1000];
	cin.getline(a,1000);
	removeDuplicate(a);
	cout<< a;
	return 0;
}