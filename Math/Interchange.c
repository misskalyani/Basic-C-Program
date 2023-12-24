#include<stdio.h>
int main()
{
	int a,b,t;
	printf("Enter Two numbers::");
	scanf("%d%d",&a,&b);
	printf("\nBefore Interchange a=%d\tb=%d",a,b);
	t=a;
	a=b;
	b=t;
	printf("\nAfter Interchange a=%d\tb=%d",a,b);
}
