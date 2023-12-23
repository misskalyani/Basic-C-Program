#include<stdio.h>
int main()
{
	float area,vol,r,h;
	printf("Enter r and h::");
	scanf("%f%f",&r,&h);
	area=2*3.14*r*r+2*3.14*r*h;
	printf("Surface Area=%f",area);
	vol=3.14*r*r*h;
	printf("\nVolume=%f",vol);
}
