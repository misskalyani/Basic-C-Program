#include<stdio.h>
void accept(int a[20][20],int b[20][20],int row,int col);
void display(int a[20][20],int b[20][20],int row,int col);
void add(int a[20][20],int b[20][20],int row,int col);
void main()
{
	int a[20][20],b[20][20],col,row;
	printf("Enter Row and Column::");
	scanf("%d%d",&row,&col);
	accept(a,b,row,col);
    display(a,b,row,col);
	add(a,b,row,col);
}
void accept(int a[20][20],int b[20][20],int row,int col)
{
	int i,j;
	printf("\nEnter First Matrix Elements:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter Second Matrix Elements:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
}
void display(int a[20][20],int b[20][20],int row,int col)
{
	int i,j;
	printf("\n First Matrix Elements Are:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Second Matrix Elements Are:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
void add(int a[20][20],int b[20][20],int row,int col)
{
	int c[20][20],i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nADDITION::\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",c[i][j]);
		}
	}
	printf("\n");
}
