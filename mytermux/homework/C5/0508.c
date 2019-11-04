//////////////////////////
// Filename: 0508.c
// Author: Jin Jianlong
// Data: 11.4
/////////////////////////

#include <stdio.h>

int main(){

	int a[10], x, i=0;
	printf("Input ten integers:");
	for (i=0; i<10; ++i)
		scanf("%d", a+i);

	printf("Input found number:");
	scanf("%d", &x);

	int index=-1;
	for (i=0; i<10; ++i)
		if (a[i] == x)
			index = i;

	if (index == -1)
		printf("Not found");
	else 
		printf("It's in No.%d\n", index);

	return 0;
}
