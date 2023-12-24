#include<stdio.h>
int main()
{
	int sp,cp;
	printf("Enter cost and selling price::");
	scanf("%d%d",&cp,&sp);
	if(cp<sp)
	{
		printf("Profit=%d",sp-cp);
	}
	else
	{
		printf("Loss=%d",cp-sp);
	}
}
