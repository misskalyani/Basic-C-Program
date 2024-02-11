#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter Limit : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			printf("%d\t",j);
			else
			printf("%c\t",(char)(j+96));
		}
		printf("\n");
	}
}
