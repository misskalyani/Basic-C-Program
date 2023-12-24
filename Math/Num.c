#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Numbers::");
	scanf("%d%d%d",&a,&b,&c);
    if((a>b&&a<c)||(a<b&&a>c))
	{
	     printf("First is Betwwen Other Two number");	
	}
	else
	{
		printf("First is NOT Betwwen Other Two number");
	}	
}
