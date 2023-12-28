#include<stdio.h>
void main()
{
	int a[20],n,sum=0,*p,i;
	printf("\nEnter Limit::");
	scanf("%d",&n);
	printf("\nEnter Array Elements::");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
    }
    p=a;
    printf("\nArray Elements Are::");
	for(i=0;i<n;i++)
	{
	    printf("\t%d\t",*p);
	    p++;
    }
    p=a;
    for(i=0;i<n;i++)
	{
	    sum=sum+*p;
	    p++;
    }
    printf("\nSum=%d",sum);
}
