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

	int i=0, j=0;
	for (i=0, i<9; ++i){
		for (j=i, j<10; ++j){
			if (a[i] < a[j]){
				double temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("result:");
	for (i=0; i<10; ++i)
		printf("%lf ", a[i]);

	return 0;
}
