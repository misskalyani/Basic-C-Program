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
			printf("%d\t",i);
			else
			printf("%c\t",(char)(i+64));
		}
		printf("\n");
	}
}
