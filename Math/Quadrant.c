#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter Points::");
	scanf("%d%d",&x,&y);
	if(x>0&&y>0)
	{
		printf("FIRST Quadrant");
	}
	else if(x<0&&y>0)
	{
		printf("SECOND Quadrant");
	}
	else if(x<0&&y<0)
	{
		printf("THIRD Quadrant");
	}
	else if(x>0&&y<0)
	{
		printf("FOURTH Quadrant");
	}
	
}
