#include<stdio.h>
void main()
{
	int n,a,count=0;
	printf("Enter Number::");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		n=n/10;
		count++;
		
	}
	printf("\nNumber Of Digit=%d",count);
}
