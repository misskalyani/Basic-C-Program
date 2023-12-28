#include<stdio.h>
int main()
{
	float u,a,t,v,s;
	printf("Enter u,a and t::");
	scanf("%f%f%f",&u,&a,&t);
	v=u+a*t;
	printf("\nFinal Velocity=%f",v);
    s=u+a*t*t;
	printf("\nDistance=%f",s);
}
