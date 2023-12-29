#include<stdio.h>
#include<string.h>
struct employee
{
	char name[20];
	int id;
	float sal;
};
void main()
{
	struct employee emp[20];
	char m[20];
	int i,n,f=0;
	printf("\nEnter Number Of Employees::");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter ID,Name And Salary::");
		scanf("%d%s%f",&emp[i].id,&emp[i].name,&emp[i].sal);
	}
	printf("\nId\tName\tSalary");
    printf("\n========================================");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t%f",emp[i].id,emp[i].name,emp[i].sal);
    }
    printf("\nEnter Name::");
    scanf("%s",m);
    for(i=0;i<n;i++)
    {
    	if(strcmp(emp[i].name,m)==0)
    	{
    		f=1;
		}
	}
	if(f==1)
	{
		printf("\nEmplyee Found");
	}
	else
	{
		printf("\nEmplyee NOT Found");
	}
}
