#include<stdio.h>
void main()
{
	int i,n,m;
	printf("Enter Number::");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
    	m=n*i;
    	printf("\n%dx%d=%d",n,i,m);
	}
}
