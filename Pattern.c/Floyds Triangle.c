#include<stdio.h>
void main()
{
	int n,r,c,count=1;
	printf("Enter Number Of r for Floyds Triangle::");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d\t",count++);/*kalyani
		}
		printf("\n");
	}
}
