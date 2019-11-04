//////////////////////////
// Filename: 0514.c
// Author: Jin Jianlong
// Data: 11.4
/////////////////////////

#include <stdio.h>

int main(){

	char s1[1001], s2[1001], s3[2002];
	printf("Input two string:");
	scanf("%s %s", s1, s2);

	for (i=0; s1[i]!=0; ++i)
		s3[i] = s1[i];

	for (j=0; s2[j]!=0; ++j){
		s3[i+j] = s2[j];

	s3[i+j] = 0;

	printf("the result:%s", s3);

	return 0;
}
