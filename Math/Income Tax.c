#include<stdio.h>
int main()
{
	float salary;
	printf("Enter basic Salary::");
	scanf("%f",&salary);
	if(salary<150000)
	{
		printf("\nTax=%f",salary*0);
	}
	else if(salary>150000&&salary<30000)
	{
		printf("\nTax=%f",salary*0.20);
	}
	else if(salary>30000)
	{
		printf("\nTax=%f",salary*0.30);
	}
}
