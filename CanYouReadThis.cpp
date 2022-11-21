#include<iostream>
#include<string>
using namespace std;
void change(char s[])
{
	for(int i=1;i<(unsigned)strlen(s);i++){
		if(s[i]>='A' and s[i]<='Z'){
			cout<<endl;
		}
		cout<<s[i];
	}
}
int main(){
	char s[1000];
	cin.getline(s,1000);
	cout<<s[0];
	change(s);
	return 0;
}