#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,*p,n;
	printf("Enter Limits::");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("\nEnter Elements::");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("\nReverse Elements Are::");
	for(i=n-1;i>=0;i--)
	{
		printf("\t%d\t",*(p+i));
	}
	
}
