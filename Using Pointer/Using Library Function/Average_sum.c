#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,*p,n,sum=0;
	float avg;
	printf("Enter Limits::");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("\nEnter Elements::");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
    avg=sum/n;
	printf("\nSum=%d\nAverage=%f",sum,avg);
}
