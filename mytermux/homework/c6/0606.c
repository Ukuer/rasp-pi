/////////////////////////
// Filename: 0606.c
// Author: Jin Jianlong
// ID: 2018218235
// Data: 11.11
////////////////////////

#include <stdio.h>

int main(void){

	int m1[4][4], m2[4][4], i=0, j=0;
	printf("Input the matrix:\n");
	for (i=0; i<4; ++i)
		for (j=0; j<4; ++j)
			scanf("%d", *(m1+i) + j);

	printf("The result:\n");
	for (i=0; i<4; ++i){
		for (j=0; j<4; ++j)
			printf("%d ", *(*(m1+j)+i));
		printf("\n");
	}

	return 0;
}
