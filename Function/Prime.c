#include<stdio.h>
int isprime(int n);
void main()
{
	int n,p;
	printf("Enter number::");
	scanf("%d",&n);
	p=isprime(n);
	if(p==1)
	  printf("Number is Prime");
	else
	  printf("Number is NOT Prime");
	  
}
int isprime(int n)
{
	int i,flag=0;
	for(i=2;i<n;i++)
	{
	    if(n%i==0)
	       {
	       	   flag=1;
	       	   break;
		   }
	}
}
