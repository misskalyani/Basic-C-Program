#include<stdio.h>
#include<stdlib.h>
int main()
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
	printf("\nMatrix Elements Are::");
	for(i=0;i<n;i++)
	{
		printf("%d\t\n",*(p+i));
	}
}
