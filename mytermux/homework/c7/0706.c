////////////////////
// Filename: 0706.c
// Author: Joseph Jin
// Data: 2019.11.15
// ID: 2018218235
////////////////////

#include <stdio.h>
#define MAXSIZE	10000	// the max size of array

int toInt(char a){		// change char to int
	return a - '0';
}

int change(char s[]){

	char *p = s;
	int num=0;
	while (*p){		// until *p==0
		num = (num<<3) + toInt(*p);	// <<3 means  *8
		++ p;
	}

	return num;
}

int main(){

	char str[MAXSIZE];
	printf("Input a string:");
	scanf("%s", str);

	int num = change(str);
	printf("%d\n", num);

	return 0;
}
