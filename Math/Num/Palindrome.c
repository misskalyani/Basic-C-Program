#include<stdio.h>
void main()
{
	int a,n,rev=0;
	printf("Enter Number::");
	scanf("%d",&n);
	a=n;
	printf("Number=%d",a);
	while(n>0)
	{
		a=n%10;
		rev=rev*10+n%10;
		n=n/10;
	}
	printf("\nReverse=%d\n",rev);
	if(a==rev)
	printf(" Not Palindrome");
	else
	printf("Palindrome");
	
}
