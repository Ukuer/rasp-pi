////////////////////
// Filename: 0701.c
// Author: Joseph Jin
// Data: 2019.11.15
// ID: 2018218235
////////////////////

#include <stdio.h>

int factor(int n){

	if (n < 0)
		return -1;
	else if (n==0 || n==1)
		return 1;
	else 
		return n * factor(n-1);
}

int main(void){

	int n=0;
	printf("Input an integer:");
	scanf("%d", &n);

	int f = factor(n);
	if (f < 0)
		printf("Input invaild\n");
	else 
		printf("The factor is %d\n", f);

	return 0;
}
