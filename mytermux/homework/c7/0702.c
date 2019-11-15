////////////////////
// Filename: 0702.c
// Author: Joseph Jin
// Data: 2019.11.15
// ID: 2018218235
////////////////////

#include <stdio.h>

int getNumber(int a, int b){

	// invaild data
	if (a<=0 || b<=0)
		return -1;

	// make sure that a >= b
	if (a < b){
		int t = a;
		a = b;
		b = t;
	}

	int r = a % b;
	if (r == 0)		// found !!
		return b;
	else 
		return getNumber(b, r);	// go on
}

int main(void){

	int n=0, m=0;
	printf("Input two ineger:");
	scanf("%d %d", &n, &m);
	
	int number = getNumber(n, m);
	if (number < 0)
		printf("Input invaild\n");
	else 
		printf("%d\n", number);

	return 0;
}
