#include<stdio.h>
void main()
{
	void swap(int*,int*);
	int n1=10,n2=20;
	printf("Enter The Two Numbers::");
	scanf("%d %d",&n1,&n2);
	swap(&n1,&n2);
	printf("\n The Swapped Values Are %d %d",n1,n2);
}
void swap(int *ptr1,int*ptr2)
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
