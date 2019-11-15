////////////////////
// Filename: 0705.c
// Author: Joseph Jin
// Data: 2019.11.15
// ID: 2018218235
////////////////////

#include <stdio.h>
#include <math.h>

int isPrime(int n){

	int l = sqrt(n);
	int i=2;
	for (i=2; i<=l; ++i)
		if (n % i == 0)
			return 0;

	return 1;
}

int main(void){

	printf("the primes between 100 and 200 are:\n");
	int i=100;
	for (i=100; i<=200; ++i)
		if (isPrime(i))
			printf("%d\n", i);

	return 0;
}
