#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number::");
	scanf("%d",&n);
	if(n%5==0&&n%7==0)
	{
		printf("n is divisible by 5 & 7");
	}
	else
	{
		printf("n is NOT divisible by 5 & 7");
	}
}
