/////////////////////////
// Filename: 0609.c
// Author: Jin Jianlong
// ID: 2018218235
// Data: 11.11
////////////////////////

#include <stdio.h>

int main(void){

	double a[1000][1000];
	int n=0, m=0;
	printf("Input the raws:");
	scanf("%d", &n);
	printf("Input the volumes:");
	scanf("%d", &m);
	printf("Input the array[%d][%d]:\n", n, m);
	int i=0, j=0;
	for (i=0; i<n; ++i)
		for(j=0; j<m; ++j)
			scanf("%lf", *(a+i)+j);

	double sum = 0;
	for (i=0; i<n; ++i)
		for (j=0; j<m; ++j)
			sum += *( *(a+i) + j);

	double mean = sum / (m*n);

	printf("The mean of array is %lf\n", mean);
	return 0;
}
