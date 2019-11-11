/////////////////////////
// Filename: 0604.c
// Author: Jin Jianlong
// ID: 2018218235
// Data: 11.11
////////////////////////

#include <stdio.h>

int main(void){
	
	char s1[100], s2[100];
	printf("Input the first string:");
	scanf("%s", s1);
	printf("Input the second string:");
	scanf("%s", s2);

	char s3[200];
	char *p1=s1, *p2=s2, *p3=s3;
	while(*p1){
		*p3 = *p1;
		++ p1;
		++ p3;
	}
	while (*p2){
		*p3 = *p2;
		++ p2;
		++ p3;
	}
	*p3 = 0;

	printf("The result: %s\n", s3);

	return 0;
}
