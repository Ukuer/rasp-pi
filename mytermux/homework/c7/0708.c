////////////////////
// Filename: 0706.c
// Author: Joseph Jin
// Data: 2019.11.15
// ID: 2018218235
////////////////////

#include <stdio.h>

int isSysmat(int *mt, const int n){

	int i=0, j=0;
	for (i=0; i<n; ++i)
		for (j=i; j<n; ++j)
			if ( *(mt + i*n +j) != \
				 *(mt + j*n + i) )	// if mt[i][j] != mt[j][i]
				return 0;
	return 1;
}

int main(void){

	const int n = 4;
	int m[n][n] = {{1,2,3,4},{2,2,4,8},\
		{3,4,3,10},{4,8,10,4}};
	
	int b = isSysmat(*m, n);
	if (b)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}
