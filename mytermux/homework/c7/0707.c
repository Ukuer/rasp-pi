////////////////////
// Filename: 0706.c
// Author: Joseph Jin
// Data: 2019.11.15
// ID: 2018218235
////////////////////

#include <stdio.h>
#include <stdlib.h>

int* transp(int *mt, const int n){

	int *p = (int *)malloc(n*n*sizeof(int));
	int i=0, j=0;
	for(i=0; i<n; ++i)
		for (j=0; j<n; ++j)
			
			*(p + j*n + i) =\
			*(mt + i*n + j);
			// p[j][i] = mt[i][j]
	return p;
}

void PrintMatrix(int *mt, const int n){
	
	int i=0, j=0;
	for (i=0; i<n; ++i){
		for (j=0; j<n; ++j)
			printf("%d ", \
				*(mt + i*n + j)); 
			// mt[i][j]
		printf("\n");
	}
}

int main(void){
	
	const int n = 4;
	int mt[n*n] = {1,2,3,4,5,6,7,8,\
		9,10,11,12,13,14,15,16};
	printf("the matrix before transposition:\n");
	PrintMatrix(mt, n);

	int *tmt = transp(mt, n);
	printf("the matrix after transposition:\n");
	PrintMatrix(tmt, n);
	
	free(tmt);
	return 0;
}









	

	







