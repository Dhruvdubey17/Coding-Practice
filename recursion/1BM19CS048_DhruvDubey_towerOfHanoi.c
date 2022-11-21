#include <stdio.h>

void move(int n, char src, char helper, char dest) {
	//base case
	if (n == 0) {
		return;
	}

	//rec case
	move(n - 1, src, dest, helper);
	printf("Shift %d from %c to %c.\n", n, src, dest);
	move(n - 1, helper, src, dest);
}

int main() {
	int n;
	printf("Enter the number of disks : ");
	scanf("%d", &n);

	printf("For creation of tower of Hanoi : \n");
	move(n, 'A', 'B', 'C');

	return 0;
}