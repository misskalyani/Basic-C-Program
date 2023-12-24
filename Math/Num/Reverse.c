#include<stdio.h>
void main()
{
	int n,a,rev=0;
	printf("Enter Number::");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		rev=(rev*10)+a;
		n=n/10;
	}
	printf("\nRverse Number =%d",rev);
}
