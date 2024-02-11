#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter Limit : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i%2==0)
			{ 
				printf("%d ",i);
			}
			else
			{
				printf("%c ",(char)(i+96));
			}
		}
		printf("\n");
	}
}
