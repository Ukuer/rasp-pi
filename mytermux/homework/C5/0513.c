//////////////////////////
// Filename: 0513.c
// Author: Jin Jianlong
// Data: 11.4
/////////////////////////

#include <stdio.h>

int main(){

	char str[10001], x;
	int index=0, i=0;

	printf("Input a string:");
	scanf("%s", str);

	printf("Input a char:");
	scanf("%c", &x);
	printf("Input index:");
	scanf("%d", &index);

	int len=0, i=0;
	while (str[len]!=0)	// get length of string
		++ len;

	for (i=len; i>index; --i)
		str[i] = str[i-1];

	str[index] = x;
	str[len+1]=0;

	printf("the result:%s\n", str);

	return 0;
}
	


