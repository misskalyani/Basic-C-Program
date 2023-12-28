#include<stdio.h>
void main()
{
	int a[20][20],col,row,i,j;
	printf("Enter Row and Column::");
	scanf("%d%d",&row,&col);
	printf("\nEnter Matrix Elements:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Matrix Elements Are:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
