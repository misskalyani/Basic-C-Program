#include<stdio.h>
int fib(int n)
{
	if(n==0)
	  return 0;
    if(n>2)
	  return fib(n-2)+fib(n-1);  
}
int main()
{
	int n,i;
	printf("Enter Limit::");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d\t",fib(i));
	}
}
