#include<stdio.h>
#include<conio.h>
void main()
{
	int days;
	float fine;
	printf("Enter Number Of Days::");
	scanf("%d",&days);
	if(days>0&&days<=5)
	{
		fine=0.50*days;
	}
	if(days>=6&&days<=10)
	{
		fine=1*days;
	}
	if(days>10)
	{
		fine=5*days;
	}
	if(days>30)
	{
		printf("Your Membership Would be Calculated");
	}
	printf("You Have To pay Rs%f fine",fine);
}
