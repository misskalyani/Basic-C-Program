#include<stdio.h>
int fib(int n)
{
	if(n==1 ||n==2)
	  return 0;
    if(n>2)
	  return fib(n-2)+fib(n-1);  
}
int main()
{
	int l,i;
	printf("Enter Limit::");
	scanf("%d",&l);
	for(i=1;i<=1;i++)
	{
		printf("\n%d",fib(i));
	}
}
