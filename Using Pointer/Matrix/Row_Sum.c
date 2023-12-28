#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a[10],i,j,sum=0,r,c;
	printf("Enter Number of Rows and Columns::");
	scanf("%d%d",&r,&c);
	printf("\nEnter Matrix Elements::");
	for(i=0;i<r;i++)
	{
		a[i]=(int*)malloc(c*sizeof(int));
		for(j=0;j<c;j++)
		{
			scanf("%d",*(a+i)+j);
		}
	}
	printf("\nMatrix Elements Are::\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",*(*(a+i)+j));
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
			sum=sum+*(*(a+i)+j);
		}
		printf("\nSum Of Row=%d",sum);
	}
}
