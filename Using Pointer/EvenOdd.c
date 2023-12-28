#include<stdio.h>
int main()
{
	int a,*p;
	printf("Enter Values::");
	scanf("%d",&a);
	p=&a;
	if(*p%2==0)
	{
		printf("Even=%d",*p);
	}
	else
	{
		printf("Odd=%d",*p);
	}
}
