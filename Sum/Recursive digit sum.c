#include<stdio.h>
int sum(int n)
{
	if(n==0)
	    return 0;
	else
	    return n%10+sum(n/10);
}
void main()
{
	int n,ans;
	printf("Enter Number::");
	scanf("%d",&n);
	printf("\nSum Of Digit=%d",sum(n));
}
