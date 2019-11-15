////////////////////
// Filename: 0710.c
// Author: Joseph Jin
// Data: 2019.11.15
// ID: 2018218235
////////////////////

#include <stdio.h>

typedef struct{
	int upper;		// number of upper char
	int lower;		// number of lower char
	int digital;	// number of digital char
	int others;		// number of others char
} Count;

Count CountString(char *s){

	int u=0, l=0, d=0, o=0;
	char *p = s;
	while (*p){
		if (*p>='A' && *p<='Z')
			++ u;
		else if (*p>='a' && *p<='z')
			++ l;
		else if (*p>='0' && *p<='9')
			++ d;
		else
			++ o;
		++ p;
	}

	Count c = {u, l, d, o};
	return c;
}

int main(void){

	int iCount[4];
	char str[100] = "1a2b3c4d5g6e7fAAA   BBB";

	Count c = CountString(str);
	iCount[0] = c.upper;
	iCount[1] = c.lower;
	iCount[2] = c.digital;
	iCount[3] = c.others;

	// output
	int i=0;
	for (i=0; i<4; ++i)
		printf("%d ", iCount[i]);

	return 0;
}
