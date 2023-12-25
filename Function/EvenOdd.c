#include<stdio.h>
void main()
{
	int n,a;
	printf("Enter Number::");
	scanf("%d",&n);
	a=iseven(a);
	if(a==1)
		printf("\n%d Is Even Number",n);
	else
		printf("\n%d Is Odd Number",n);
		   
	
}
int iseven(int n)
{
	if(n%2==0)
	   return 1;
	else
	   return 0;
}
