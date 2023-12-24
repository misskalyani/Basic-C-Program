#include<stdio.h>
int main()
{
	int hour,minute,second;
	printf("Enter Time::");
	scanf("%d%d%d",&hour,&minute,&second);
	if(0<=hour<24&&0<=minute<60&&0<=second<60)
	{
		printf("Time is VALID");
	}
	else
	{
		printf("Time is NOT valid");
	}
}
