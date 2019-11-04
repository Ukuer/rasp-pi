//////////////////////////
// Filename: 0515.c
// Author: Jin Jianlong
// Data: 11.4
/////////////////////////

#include <stdio.h>

int main(){
	
	int m[5][5]{(17,24,1,8,15),
		(23,5,7,14,16),
		(4,6,13,20,22),
		(10,12,19,21,3),
		(11,18,25,2,9)};

	int sum=0, i=0, j=0;
	for (i=0, i<5; ++i)
		sum = m[0][i];

	// check every row
	for (i=0; i<5; ++i){
		int s = 0;
		for (j=0; j<5; ++j)
			s += m[i][j];
		if (s != sum){
			printf("No\n");
			return 0;
		}
	}

	// check every vol
	for (i=0; i<5; ++i){
		int s = 0;
		for (j=0; j<5; ++j)
			s += m[j][i];
		if (s != sum){
			printf("No\n");
			return 0;
		}
	}

	// check angleline
	int s=0;
	for (i=0, i<5; ++i)
		s += m[i][i];
	if (s != sum){
		printf("No\n");
		return 0;
	}
	
	// check reangleline
	s = 0;
	for (i=0; i<5; ++i)
		s += m[i][4-1];
	if (s != sum)
		printf("No\n");
		return 0;
	}

	printf("Yes\n");
	return 0;
}
