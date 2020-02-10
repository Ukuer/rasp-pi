/* HailStone.h
 *			{1}		if n==1
 * H(n) =	{n} u H(n/2)	if n is even
 *			{n} u H(3*n+1)	if n is odd
 */

#include <stdio.h>

// Get the length of the set
int HailStone(int num){
	int length = 0;
	while (num >1){ 
		(num % 2) ? (num=num*3+1) : (num/=2);
		++ length;
	}
	return ++length;
}

int main(void){
	
	int i=1;
	for (i=1; i<100000; ++i){
		printf("%d,%d\n",i,HailStone(i));
	}

	return 0;
}
