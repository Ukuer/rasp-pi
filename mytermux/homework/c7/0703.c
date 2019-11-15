////////////////////
// Filename: 0703.c
// Author: Joseph Jin
// Data: 2019.11.15
// ID: 2018218235
////////////////////

#include <stdio.h>

int countNumber(char *s){

	int n=0;
	char *p = s;
	while (*p){		// until *p == 0

		if (*p>='0' && *p<='9')	// if *p is number
			++ n;
		++ p;		// point the next
	}
	return n;
}

int main(void){

	char str[10000];
	printf("Input a string:");
	scanf("%s", str);

	int n = countNumber(str);
	printf("The number is %d\n", n);

	return 0;
}
