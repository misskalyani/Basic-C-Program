#include<stdio.h>
int main()
{
	int sum=0,x,y;
	printf("Enter Number::");
	scanf("%d%d",&x,&y);
	while(x<=y)
	{
		sum=sum+x;
		x++;
	}
	printf("\nSum=%d",sum);
}
