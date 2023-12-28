#include<stdio.h>
int main()
{
	int a[20],n,i,*p,min;
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
    min=a[0];
    for(i=0;i<n;i++)
	{
	   if(*p<min)
	   {
	   	   min=*p;
	   }
   }
    printf("\nMinimum=%d",min);
   
}

