/////////////////////////
// Filename: 0607.c
// Author: Jin Jianlong
// ID: 2018218235
// Data: 11.11
////////////////////////

#include <stdio.h>


int getnumber(char s){

	if (s>='0' && s<='9')
		return s - '0';
	else if (s>='A' && s<='F')
		return s - 'A' + 10;
	else if (s>='a' && s<='f')
		return s - 'a' + 10;
	else {
		printf("Error Input\n");
		return 0;
	}
}

void change(char s, char *t){

	int n = getnumber(s);
	int i=3;
	for (i=3; i >= 0; ++i){
		if (n%2 == 1)
			*(t+i) = '1';
		else 
			*(t+i) = '0';
		n = (n-(n%2))/2;
	}
}

int main(void){

	char s[100],t[400];
	printf("input the string:");
	scanf("%s", s);

	char *ps = s,*pt = t;
	while (*ps){
		printf("a");
		change(*ps, pt);
		printf("b");
		++ ps;
		pt += 4;
	}
	*pt = 0;
	printf("c");


	printf("The result:");
	pt = t;
	while (pt != 0){
		printf("%c ", *pt);
		++ pt;
	}

	return 0;
}
