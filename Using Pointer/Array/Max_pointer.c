#include<stdio.h>
void main()
{
	int *larger(int*,int*);
	int n1,n2,*maxptr;
	printf("Enter The two Numbers::");
	scanf("%d %d",&n1,&n2);
	maxptr=larger(&n1,&n2);
	printf("\nThe Larger Value is %d",*maxptr);
}
int *larger(int *ptr1,int *ptr2)
{
	if(*ptr1>*ptr2)
		return(ptr1);
	else
		return(ptr2);	
}
