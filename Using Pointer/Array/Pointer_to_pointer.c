#include<stdio.h>
void main()
{
	int i=10,*p1,**p2;
	p1=&i;
	p2=&p1;
	printf("\nThe Value Of i is %d %d %d",i,*p1,**p2);
	printf("\nThe Address Of i is %u %u %u",&i,p1,*p2);
}
