//////////////////////////
// Filename: 0510.c
// Author: Jin Jianlong
// Data: 11.4
/////////////////////////

#include <stdio.h>

int main(){

	char str[1001];
	printf("Input a string:");
	scanf("%s", str);

	int i=0, len=0;
	while (str[len] != 0)	// get length of string
		++ len;

	for (i=0; i<(len-1)/2; ++i){
		if (str[i] != str[len-i-1]){
			printf("No\n");
			return 0;
		}
	}

	printf("Yes\n");
	return 0;
}
