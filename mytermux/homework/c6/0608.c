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
	else 
		return s - 'A' + 10;
}

void swich(char s, char *t){

	int n = getnumber(s);
	int i=3;
	for (i=3; i >= 0; ++i){
		if (n%2 == 1)
			*(t+i) = 1;
		else 
			*(t+i) = 0;
		n /= 2;
	}
}

int main(void){

	char s[100],t[400];
	printf("input the string:");
	scanf("%s", s);

	char *ps = s,*pt = t;
	while (*ps != 0){
		switch(*ps, *pt);
		++ ps;
		++ pt;
	}
	pt = NULL;

	printf("The result:");
	pt = t;
	while (*pt != NULL){
		int i=0;
		for (i=0; i<4; ++i)
			printf("%c ", *(*t+i));
		++ pt;
	}

	return 0;
}


