////////////////////
// Filename: 0704.c
// Author: Joseph Jin
// Data: 2019.11.15
// ID: 2018218235
////////////////////

#include <stdio.h>

void swap(int *a, int *b){	// to swap two number
	int t = *a;
	*a = *b;
	*b = t;
}

void sort(int a[], int size){	// bubble sort with increased

	int n=size;
	while (n--){
		int i=0;
		for (i=0; i<size-1; ++i)
			if (a[i] > a[i+1])
				swap(a+i, a+i+1);	// swap two number
	}
}

int main(){

	int i=0;
	const int size=10;		// the size is the length of array
	int a[size] = {10,6,8,4,6,3,9,7,1,2};	// initialized
	printf("the array before sorted:");		// output first
	for (i=0; i<size; ++i)
		printf("%d ", a[i]);
	printf("\n");
	
	sort(a, size);	// a get sorted
	printf("the array after sorted:");	// output
	for (i=0; i<size; ++i)
		printf("%d ", a[i]);

	return 0;
}
