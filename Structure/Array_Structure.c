#include<stdio.h>
typedef struct student
{
	char name [20];
	int rno;
	float per;
}stud;
void main()
{
	int n;
	stud s[10];
	void accept(stud s[],int n);
	void disp(stud s[],int n);
	printf("\nEnter The Number Of Students\n");
	scanf("%d",&n);
	accept(s,n);
	disp(s,n);
}
void accept(stud s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter The name and roll no percentage\n");
		scanf("%s%d%f",&s[i].name,&s[i].rno,&s[i].per);
	}
}
void disp(stud s[],int n)
{
	int i;
	printf("\n\nname\trollno\tpercentage");
	for(i=0;i<n;i++)
	{
		printf("\n%s\t%d\t%f",s[i].name,s[i].rno,s[i].per);
	}
}
