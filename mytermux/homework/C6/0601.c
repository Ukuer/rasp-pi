/////////////////////////////
// Filename: 0601.c
// Author: Jin Jianlong
// ID: 2018218235
// Data: 11.10
////////////////////////////

#include <stdio.h>

int main(void){

	double a[10];
	printf("Input ten number:");
	double *p = a;
	while (p != a+10){	// read in
		scanf("%lf", p);
		++ p;
	}

	// reset p
	p = a;
	double max = *p;
	while (p != a+10){
		if (*p > max)	// to find the bigger
			max = *p;
		++ p;			// point the next
	}

	printf("the max is %ld\n", max);

	return 0;
}