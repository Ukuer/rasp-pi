#include <stdio.h>

int add (int a, int b){

	return a + b;
}

int main(void){

	int x=2;
	int y=4;
	int sum = add(x,y);

	printf("sum is %d", sum);

	return 0;
}
