#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,D;
	float x,y;
	printf("Enter Coefficient ofx^2,x and constant term::");
	scanf("%d%d%d",&a,&b,&c);
	D=b*b-4*a*c;
	if(D<0)
	{
	    printf("Both Roots Are IMAGINARY");
	}
    else if(D==0)
	{
		printf("Both Roots Are EQUAL");
		x=-b/(2.0*a);
		printf("Root is%f");
	}
    else if(D>0)
	{
		printf("Roots Are REAL and DISTINCT");
		x=(-b+sqrt(D))/(2*a);
		y=(-b-sqrt(D))/(2*a);
		printf("\n Roots Are=%f,%f",x,y);
	}
}
