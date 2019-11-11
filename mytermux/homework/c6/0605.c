/////////////////////////
// Filename: 0605.c
// Author: Jin Jianlong
// ID: 2018218235
// Data: 11.11
////////////////////////

#include <stdio.h>

void read_matrix(int m[]){
	int i=0;
	for (i=0; i<4; ++i)
		scanf("%d", m + i);
}

void add_line(int a1[], int a2[], int a3[]){
	int i=0;
	for (i=0; i<4; i++)
		*(a3+i) = *(a1 + i) + *(a2 + i);
}

int main(void){

	int m1[3][4], m2[3][4], m3[3][4];
	printf("Input the first matrix:\n");
	read_matrix(*m1);
	read_matrix(*(m1+1));
	read_matrix(*(m1+2));
	printf("Input the second matrix:\n");
	read_matrix(*m2);
	read_matrix(*(m2+1));
	read_matrix(*(m2+2));

	int i=0;
	for (i=0; i<3; ++i)
		add_line(*(m1+i), *(m2+i), *(m3+i));

	printf("The add result:\n");
	int j=0;
	for (i=0; i<3; ++i){
		for (j=0; j<4; ++j){
			printf("%d ", m3[i][j]);
		}
		printf("\n");
	}

	return 0;
}

		
