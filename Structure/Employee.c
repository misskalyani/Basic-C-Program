#include<stdio.h>
struct employee
{
	char name[20];
	int id;
	float sal;
};
void main()
{
	struct employee emp[20];
	int i,n,ch;
	float s;
	printf("\nEnter Number Of Employees::");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter ID,Name And Salary::");
		scanf("%d%s%f",&emp[i].id,&emp[i].name,&emp[i].sal);
	}
	printf("\nMENU");
	printf("\n1-Display All Employee detials::");
	printf("\n2-Display Greater Salary::");
	printf("\nEnter Choice::");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\nId\tName\tSalary");
		       printf("\n========================================");
		       for(i=0;i<n;i++)
		       {
		       		printf("\n%d\t%s\t%f",emp[i].id,emp[i].name,emp[i].sal);
			   }
			   break;
		case 2:printf("\nEnter Salary::");
			   scanf("%f",&s);
			   printf("\nID\tName\tSalary");
			   printf("\n=========================");
			   for(i=0;i<n;i++)
			   {
			   		if(emp[i].sal>s)
					{
						printf("\n%d\t%s\t%f",emp[i].id,emp[i].name,emp[i].sal);
					}
			   
			   }
	}
	
}
