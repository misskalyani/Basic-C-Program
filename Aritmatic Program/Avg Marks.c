#include<stdio.h>
void main()
{
	float m1,m2,m3,avg;
	printf("Enter Marks Of THREE Subject::");
	scanf("%f%f%f",&m1,&m2,&m3);
	avg=(m1+m2+m3)/3;
	if(avg>70&&avg<=100)
	{
		printf("DISTICTION");
	}
	else if(avg>=60&&avg<=70)
	{
		printf("FIRST CLASS");
	}
	else if(avg>=50&&avg<60)
	{
		printf("SECOND CLASS");
	}
	else if(avg>=40&&avg<50)
	{
		printf("PASS");
	}
	else
	{
		printf("FAIL");
	}
}
