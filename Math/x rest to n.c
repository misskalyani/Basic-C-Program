#include<stdio.h>
int main()
{
	int m=1,i=1,n,x;
	printf("Enter Number::");
	scanf("%d%d",&x,&n);
	while(i<=n)
	{
		m=m*x;
		i++;
	}
	printf("\nPower=%d",m);
}
