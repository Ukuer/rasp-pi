//////////////////////////
// Filename: 0511.c
// Author: Jin Jianlong
// Data: 11.4
/////////////////////////

#include <stdio.h>

int main(){

	char str[1001], x;
	printf("Input a string:");
	scanf("%s", str);

	printf("Input a char:");
	scanf("%c", &x);

	int i=0, n=0;
	for (i=0; str[i]!=0; ++i)
		if (str[i] == x)
			++ n;

	printf("the number of the char is %d\n", n);

	return 0;
}
	

