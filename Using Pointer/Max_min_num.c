#include<stdio.h>
int main()
{
	int a,b,*p,*q;
	printf("Enter Values::");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	if(*p>*q)
	{
		printf("Maximum=%d",*p);
	}
	else
	{
		printf("Minnimum=%d",*q);
	}
}
