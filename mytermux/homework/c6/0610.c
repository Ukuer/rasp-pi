/////////////////////////
// Filename: 0610.c
// Author: Jin Jianlong
// ID: 2018218235
// Data: 11.11
////////////////////////

#include <stdio.h>

double mean(double *a){
	double s=0;
	int i=0;
	for (i=0; i<4; ++i)
		s += *(a+i);
	s /= 4;
	return s;
}

double variance(double *a){
	double v=0;
	double m = mean(a);
	int i=0;
	for (i=0; i<4; ++i)
		v += (*(a+i) - m) * (*(a+i) - m);
	v /= 4;
	return v;
}

int main(void){

	double a[3][4];
	printf("Input the array[3][4]:\n");
	int i=0, j=0;
	for (i=0; i<3; ++i)
		for (j=0; j<4; ++j)
			scanf("%lf", *(a+i)+j);

	double b[3][2];
	for (i=0; i<3; ++i){
		*(*(b+i)) = mean(*(a+i));
		*(*(b+i) + 1) = variance(*(a+i));
	}

	printf("The result:\n");
	for (i=0; i<3; ++i)
		printf("%lf %lf\n", *(*(b+i)), *(*(b+i)+1));

	return 0;
}

