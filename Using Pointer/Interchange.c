#include<stdio.h>
void main()
{
	int a,b,*p,*q,t;
	printf("Enter Values::");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	t=*p;
	*p=*q;
	*q=t;
	printf("\nInterchange Values a=%d\nb=%d",*p,*q);
}
