#include<stdio.h>
typedef struct student
{
	char name[20];
	int rno;
	float per;
}stud;
int main()
{
	stud s1,s2;
	printf("Enter Name Roll Number and Percentage For Student 1::");
	scanf("%s%d%f",&s1.name,&s1.rno,&s1.per);
	printf("\nEnter Name Roll Number and Percentage For Student 2::");
	scanf("%s%d%f",&s2.name,&s2.rno,&s2.per);
	printf("\nThe Student Details Are::\n");
	printf("\nStudent 1:%s %d %f",s1.name,s1.rno,s1.per);
	printf("\nStudent 2:%s %d %f",s2.name,s2.rno,s2.per);
}
