/////////////////////////////
// Filename: 0602.c
// Author: Jin Jianlong
// ID: 2018218235
// Data: 11.10
////////////////////////////

#include <stdio.h>

// swap two values of pointers
void swap(double *p1, double *p2){
	double t = *p1;
	*p1 = *p2;
	*p2 = t;
}

int main(void){

	// initilization
	double a[10];
	printf("Input ten number:");
	double *p = a;
	while (p != a+10){	// read in ten number
		scanf("%lf", p);
		++ p;
	}

	// increasing sorted
	double pback=a, pfore;	// use pointer
	while (pback != a+10){
		pfore = pback + 1;	// defines pfore
		while(pfore != a+10){
			if (*pback > *pfore)
				swap(pback, pfore);		// swap
			++ pfore;			// to point the next
		}
		++ pback;
	}

	printf("The increasing sorted:");
	p = a;
	while (p != a+10){		// out put
		printf("%lf ", *p);
		++ p;
	}

	return 0;
}