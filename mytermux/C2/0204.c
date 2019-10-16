#include <stdio.h>

int mian(){
		const double pi = 3.1416;
		double angle, r, s;
		printf("Input angle:");
		scanf("%lf", &angle);
		printf("Inut radius:");
		scanf("%lf", &r);
		s = pi*r*r*(angle/360);
		printf("the area is %lf\n", s);
		return 0;
}

int main(){
		double x, y, z, d, ax, ay, az;
		printf("Input three number:");
		scanf("%lf %lf %lf",&x,&y,&z);
		d = sqrt(x*x+y*y+z*z);
		ax = acos(a/d);
		ay = acos(b/d);
		az = acos(c/d);
		printf("the distance is %lf", d);
		printf("the angle of x is %lf\nthe angle of y is %lfthe angle of z is %lf\n", ax,ay,az);
		return 0;
}

int main(){
		double a, b, c, d, m;
		printf("Input four scores:");
		scanf("%lf %lf %lf %lf", &a,&b,&c,&d);
		m = (a+b+c+d)/4;
		printf("the average of scores is %.2lf\n", m);
		return 0;
}

int main(){
		char c;
		printf("Input a number char:");
		scanf("%c", &c);
		int n = c - '0';
		printf("the number is %d\n", n);
		return 0;
}

int main(){
		char ch, CH;
		printf("Input a upper case letter:");
		scanf("%c", &CH);
		ch = CH + 26;
		printf("the lower case letter is %c\n", ch);
		return 0;
}

int main(){
		double m, r, n, t;
		printf("Input base money:");
		scanf("%lf", &m);
		printf("Input annual interest rate:");
		scanf("%lf", &r);
		printf("Input years:");
		scanf("%lf", &n);
		printf("Input tax:");
		scanf("%lf", &t);
		while (n--){
				m = m*(1+r)*(1-t);
		}
		printf("the total money is %.2lf\n", m);
		return 0;
}

int main(){
		int a, b;
		printf("Input two integers:");
		scanf("%d %d", &a, &b);
		int temp = a;
		a = b;
		b = temp;
		printf("%d %d\n", a, b);
		return 0;
}

int main(){
		int n, a, b, c, d;
		printf("Input a number:");
		scanf("%d", &n);
		d = n % 10;
		c = (n-d)/10;
		b = (n-c-d)/100;
		a = (n-b-c-d)/1000;
		printf("%d, %d, %d, %d", d, c, b, a);
		return 0;
}

int main(){
		double n;
		printf("Input a number:");
		scanf("%lf", &n);
		if (n>0)
				printf("It's positive\n");
		else if (n<0)
				printf("It's negative\n");
		else
				printf("It's 0\n");
		return 0;
}

int main(){
		int n;
		printf("Input a number:");
		scanf("%d", &n);
		if (n%2 == 1)
				printf("It's an odd\n");
		else 
				printf("It's an even\n");
		return 0;
}

int main(){
		char c;
		printf("Input a char:");
		scanf("%c", &c);
		if (c>='0' && c <= '9')
				printf("It's a digit\n");
		else if (c>='A' && c<='Z')
				printf("It's an upper letter\n");
		else if (c>='a' && c<='z')
				printf("It's a lower letter\n");
		else 
				printf("It's an other char\n");
		return 0;
}

int main(){
		int y;
		printf("Input year:");
		scanf("%d", &y);
		if (y %100 == 0){
				if (y%400 == 0)
						printf("Yes\n");
				else 
						printf("No\n");
		}
		else if (y%4 == 0)
				printf("Yes\n");
		else 
				printf("No\n");
		return 0;
}

