#include<stdio.h>
int main()
{
	int r,i,j;
	printf("Enter number of rows : ");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
		{
		   printf("%c  ",(char)(j+64));
		}
		printf("\n");
	}
}
