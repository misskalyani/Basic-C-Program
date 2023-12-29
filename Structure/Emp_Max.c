#include<stdio.h>
#include<string.h>
struct employee
{
	char name[20];
	int id;
	float sal;
};
void maximum(struct employee emp[20],int n)
{
	int i,k;
	float max;
	for(i=0;i<n;i++)
	{
		if(emp[i].sal>max)
		{
			max=emp[i].sal;
			k=i;
		}
	}
	printf("\nId\tName\tSalary");
    printf("\n========================================");
    printf("\n%d\t%s\t%f",emp[k].id,emp[k].name,emp[k].sal);
}
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
    maximum(emp,n);
}
