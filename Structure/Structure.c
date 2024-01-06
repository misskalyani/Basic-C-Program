#include<stdio.h>
struct student
{
	char name[20];
	int rno;
	float per;
};
void main()
{
	void disp(struct student s);
	struct student s1={"AAA",10,76.8};
	struct student s2={"BBB",10,76.8};
	disp(s1);
	disp(s2);
}
void disp(struct student s)
{
	printf("\n\n Name\tRoll No\tPercentage");
	printf("\n%s\t%d\t%f",s.name,s.rno,s.per);
}
