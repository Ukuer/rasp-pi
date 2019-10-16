#include <stdio.h>

int main(){
		double h, r, v;
		const double pi = 3.1415;
		printf("Input height:");
		scanf("%lf", &h);
		printf("\nInput radius:");
		scanf("%lf", &r);
		v = h*r*r*pi/3;
		printf("\nthe volume is %lf",v);

		return 0;
}
