#include<stdio.h>
void main()
{
	int a,b,*p,*q;
	printf("Enter Values::");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	printf("\nAddition=%d",*p+*q);
	printf("\nSubtraction=%d",*p-*q);
	printf("\nMultiplication=%d",*p * *q);
	printf("\nDivison=%d",*p / *q);
	printf("\nFraction=%d",*p % *q);
}
