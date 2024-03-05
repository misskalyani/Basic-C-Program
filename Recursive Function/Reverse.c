#include<stdio.h>
int rev(int n)
{
	int sum=0;
	if(n>0)
	{
		sum=sum*10+n%10;
		return rev(n/10);
	}
	else
	{
		return sum;
	}
}
/*kalyani
int main()
{
	int n;
	printf("Enter Number::");
	scanf("%d",&n);
	printf("\nReverse=%d",rev(n));
}
