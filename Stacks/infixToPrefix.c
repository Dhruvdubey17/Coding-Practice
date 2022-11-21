#include<stdio.h>
#include<stdbool.h>

int top = -1;
char stack[10];

void push(int ele) {
	if(top == 10 -1) {
		printf("Stack overflown\n");
	}
	else {
		top++;
		stack[top] = ele;
	}
}

bool empty() {
	if(top==-1) {
		return true;
	}
	return false;
}

void pop(int *stack) {
	if(!empty()) {
		top--;
	}

	else 
		printf("Stack Underflow\n");
	
}

void convertPostfix(int *prefix,int n) {
	char postfix[100] = {0};
	for(int i=0;prefix[i]!='\0';i++) {
		char ch = prefix[i];
		if(ch != )
	}
}

int main() {

	char prefix[] = {"4$2*3-3+8/4/(1+1)"};

	
	return 0;
}
