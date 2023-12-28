#include<stdio.h>
void flag(int *n,int *flag1,int *flag2,int *flag3)
{
	int i,f=0;
	if(*n%2==0)
	{
		*flag1=1;
	}
	for(i=2;i<*n;i++)
	{
		if(*n%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==0)
	    *flag2==1;
	if(*n%3==0 ||*n%7==0)
	     *flag3==1;    
	
}
void main()
{
	int n,flag1=0,flag2=0,flag3=0;
	printf("\nEnter Number::");
	scanf("%d",&n);
	flag(&n,&flag1,&flag2,&flag3);
	if(flag1==1)
		printf("\nNumber is Even");
	else
		printf("\nNumber is NOT Even");	
	if(flag2==1)
		printf("\nNumber is Prime");
	else
		printf("\nNumber is NOT Prime");
	if(flag3==1)
		printf("\nNumber is Divisible by 3or7");
	else
		printf("\nNumber is NOT Divisible by 3or7");	
				
			
}
