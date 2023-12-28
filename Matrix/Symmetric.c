#include<stdio.h>
#include<stdio.h>
void main()
{
	int a[20][20],col,row,i,j,f=1;
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
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]==a[j][i])
			{
				f=0;
				break;
			}
		}
	}
	if(f==0)
	   printf("\nMatrix Is Symmetric");
    else
       printf("\nMatrix Is NOT Symmetric");
}
