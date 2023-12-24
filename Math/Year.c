#include<stdio.h>
int main()
{
	int year;
	printf("Enter Year::");
	scanf("%d",&year);
	if(year%4&&year%400)
	{
		printf("Year Is Leap Year");
	}
	else
	{
		printf("year Is NOT Leap Year");
	}
}
