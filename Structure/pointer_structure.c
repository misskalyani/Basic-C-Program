#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rno;
	float per;
};
void main()
{
	void modify(struct student *ptr);
	struct student s={"ABC",10,67.7};
	modify(&s);
	printf("%s\t%d\t%f",s.name,s.rno,s.per);
}
void modify(struct student *ptr)
{
	strcpy(ptr->name,"DEF");
	ptr->rno=20;
	ptr->per=89.6;
}
