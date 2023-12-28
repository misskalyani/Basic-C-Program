#include<stdio.h>
int main()
{
	int a,b;
	float aritmetic_mean,harmonic_mean;
	printf("Enter two number a and b::");
	scanf("%d%d",&a,&b);
	aritmetic_mean=(a+b)/2;
	harmonic_mean=(a*b)/(a+b);
	printf("\nAritmetic mean=%f\nHarmonic mean=%f",aritmetic_mean,harmonic_mean);
}
