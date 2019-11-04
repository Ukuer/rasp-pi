//////////////////////////
// Filename: 0505.c
// Author: Jin Jianlong
// Data: 11.4
/////////////////////////

#include <stdio.h>

int main(){

	double a[10];
	printf("Input ten floats");
	for (i=0; i<10; ++i)
		scanf("%lf", a+i);	// read in

	int i=0;
	for (i=0; i<5; ++i){
		double temp = a[i];
		a[i] = a[9-i];
		a[9-i] = temp;
	}

	printf("result:");
	for (i=0; i<10; ++i)
		printf("%lf ", a[i]);

	return 0;
}

