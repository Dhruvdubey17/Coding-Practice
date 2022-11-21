#include<iostream>
#include<stack>
using namespace std;

bool checkPar(char *s) {
	stack<char> stk;
	for(int i=0;s[i]!='\0';i++) {
		char ch = s[i];
		if(ch=='(') {
			stk.push(ch);
		}
		else if(ch==')') {
			if(stk.empty() or stk.top()!='('){
				return false;
			}
			stk.pop();
		}
	}
	return stk.empty();
}

int main() {
	char s[100] = "((a+b))+(f-a+c))";

	if(checkPar(s)) {
		cout<<"Yes";
	}
	else
		cout<<"No";
	return 0;
}

#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool checkPar(char *s) {
    stack<char>stk;
    int i = 0;
    while(s[i]!='\0') {
        int i = 0;
        char ch;
        stack<char>stk;

        while(s[i]!='\0') {
            ch = s[i];
            switch(ch) {
                case '{': 
                if(stk.empty() || stk.top() == ch) {
                    stk.push(ch);
                    break;
                }
                else {
                    return false;
                }
                case '[':
                if(stk.empty() || stk.top() != '(') {
                    stk.push(ch);
                    break;
                }
                else 
                    return false;

                case '(':
                if(stk.empty()){
                    stk.push(ch);
                    break;
                }
                else 
                    return false;

                
        }

}


int main() 
{
    char s[1001];
    int n;
    cin>>n;
    while(n--) {
        cin>>s;
        if(checkPar) {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";

    }
}
