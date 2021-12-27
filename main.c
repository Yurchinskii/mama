#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,s,p;
	a=9;
	b=6;
	s=(a*b)/2;
	c=sqrt(a*a+b*b);
	p=a+b+c;
	printf("Perimetr %f\n", p);
	printf("Ploshad %f\n", s);
	return 0;
}
