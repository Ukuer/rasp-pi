////////////////////
// Filename: 0709.c
// Author: Joseph Jin
// Data: 2019.11.15
// ID: 2018218235
////////////////////

#include "0709.h"

double Ploy(double x, int n){	// to compute (x^n / n!)

	if (n==0)
		return 1;
	else if (n==1)
		return x;
	else

		return  Pow(x, n) /(double)Factor(n);	// get x^n / n!
}

double Sin(double x){
	
	double ax = x / 180 * PI;
	double s=0, t=0;
	int i=0;
	while (1){
		t = Ploy(ax, 2*i+1);
		s += Pow(-1, i) * t;
		
		if( t < 1e-6)
			break;
		++ i;
	}

	return s;
}

double Cos(double x){

	double ax = x / 180 * PI;
	double c=0, t=0;
	int i=0;
	while (1){
		t = Ploy(ax, 2*i);
		c += Pow(-1, i) * t;

		if (t < 1e-6)
			break;
		++i;
	}

	return c;
}

double Pow(double x, int n){

	double m=1;
	while(n--)
		m *= x;
	
	return m;
}

int  Factor(int n){

	if (n==0 || n==1)
		return 1;
	else 
		return n * Factor(n-1);
}

int main(void){

	double x = Sin(30) + Cos(60);

	printf("%lf\n", x);

	return 0;
}




