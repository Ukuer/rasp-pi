//////////////////////////
// Filename: 0505.c
// Author: Jin Jianlong
// Data: 11.4
/////////////////////////

#include <stdio.h>

int main(){

	int a[10], i=0;
	printf("Input ten integers:");
	for (i=0; i<10; ++i)
		scanf("%d", a+i);	// read in

	int n=10;
	while (n--){		// bubble sort
		for (i=0; i<9; ++i)
			if (a[i] > a[i+1]){
				int temp = a[i];	// to swap
				a[i] = a[i+1];
				a[i+1] = temp;
			}
	}

	printf("result:");
	for (i=0; i<10; ++i)
		printf("%d ", a[i]);

	return 0;
}
