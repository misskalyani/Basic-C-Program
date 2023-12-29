#include<stdio.h>
struct student
{
	char name[20];
	int rno;
	float per;
};
void main()
{
	struct student stud[20];
	int i,n,ch;
	float s;
	printf("\nEnter Number Of Students::");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter RolNo,Name And Percentage::");
		scanf("%d%s%f",&stud[i].rno,&stud[i].name,&stud[i].per);
	}
	printf("\nMENU");
	printf("\n1-Display All Students detials::");
	printf("\n2-Display Greater Percentage::");
	printf("\nEnter Choice::");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\nRollNo\tName\tPercentage");
		       printf("\n========================================");
		       for(i=0;i<n;i++)
		       {
		       		printf("\n%d\t%s\t%f",stud[i].rno,stud[i].name,stud[i].per);
			   }
			   break;
		case 2:printf("\nEnter Percent::");
			   scanf("%f",&s);
			   printf("\nRollNo\tName\tPercent");
			   printf("\n=========================");
			   for(i=0;i<n;i++)
			   {
			   		if(stud[i].per>s)
					{
						printf("\n%d\t%s\t%f",stud[i].rno,stud[i].name,stud[i].per);
					}
			   
			   }
	}
	
}
