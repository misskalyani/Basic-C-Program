#include<stdio.h>
int main()
{
	float l,h,b,sa,v;
	printf("Enter length breadth height::");
	scanf("%f%f%f",&l,&b,&h);
	sa=2*(l*b+l*h+b*h);
	v=l*b*h;
	printf("\nSurface Area Of cuboid=%f",sa);
	printf("\nVolume Of cuboid=%f",v);
}
