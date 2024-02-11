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
				printf("%c ",(char)(j+96));
			}
			else
			{
				
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}
