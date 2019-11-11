/////////////////////////
// Filename: 0607.c
// Author: Jin Jianlong
// ID: 2018218235
// Data: 11.11
////////////////////////

#include <stdio.h>

int PointofSub(char *s1, char *s2){	// make sure

	char *p1 = s1, *p2 = s2;
	while(*p2){
		if (*p2 != *p1)
			return 0;
		++ p2;
		++ p1;
	}
	return 1;
}

int substr(char *s1, char *s2){

	char *p1 = s1, *p2 = s2;
	while (*p1){
		if (*p1 == *p2)
			if (PointofSub(p1, p2))
				return 1;
		++ p1;
	}
	return 0;
}

int main(void){

	char s1[100], s2[100];
	printf("Input the first string:");
	scanf("%s", s1);
	printf("Input the second string:");
	scanf("%s", s2);

	if (! substr(s1, s2)){
		printf("not a substring\n");
		return 0;
	}

	char s3[100];
	char *p1 = s1, *p2 = s2, *p3 = s3;
	while (*p1){
		if (p2 != 0 && PointofSub(p1, p2)){
			while (*p2){
				++ p1;
				++ p2;
			}
		}
		*p3 = *p1;
		++ p1;
		++ p3;	
	}
	*(++p3) = 0;
	printf("the result:%s", s3);

	return 0;
}
