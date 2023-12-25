#include<stdio.h>
int sum(int n)
{
	if(n==0)
	  return 0;
	else
	  return n%10+(n/10);
}
void main()
{
	int n,s;
	printf("Enter Number::");
	scanf("%d",&n);
	s=sum(n);
	if(s>10)
	    printf("\nSum=%d",sum(n));
	else
	    printf("\nSum=%d",s);
}
