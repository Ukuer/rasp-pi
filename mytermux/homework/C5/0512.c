//////////////////////////
// Filename: 0512.c
// Author: Jin Jianlong
// Data: 11.4
/////////////////////////

#include <stdio.h>

int main(){

	char name[10][101], x[101];
	int i=0;
	printf("Input ten names:");
	for (i=0; i<10; ++i)
		scanf("%s", name[i]);

	printf("Input the name to find:");
	scanf("%s", x);

	int index = -1;
	for (i=0; i<10; ++i){
		if (name[i] == x)
			index = i;
	}

	if (index == -1)
		printf("Not found\n");
	else
		printf("It's in No.%d\n", index);

	return 0;
}
