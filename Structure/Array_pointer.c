#include<stdio.h>
struct student
{
	char name[20];
	int rno;
}s[3]={"ABC",1,"DEF",2,"GHI",3};
void main()
{
	int i;
	struct student *ptr=s;
	for(i=0;i<3;i++,ptr++)
	{
		printf("Address = %u: %s %d\n",ptr,ptr->name,ptr->rno);
	}
}
