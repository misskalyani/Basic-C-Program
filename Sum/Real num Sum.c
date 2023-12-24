#include<stdio.h>
void main()
{
	int n,sum=0,i=1,y=1,x;
	printf("Enter Number Of terms::");
	scanf("%d",&n);
	printf("Enter Number::");
	scanf("%d",&x);
	while(i<=n)
	{
		sum=sum+y*x;
		y=y+2;
		i++;
		
	}
	printf("\nSum=%d",sum);
}
