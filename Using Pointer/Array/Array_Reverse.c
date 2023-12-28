#include<stdio.h>
int main()
{
	int a[20],n,*p,i;
	printf("Enter Limit::");
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
    p=&a[n-1];
    
    printf("\nArray in Reverse Oreder Are::");
	for(i=0;i<n;i++)
	{
	    printf("\t%d\t",*p);
	    p--;
    }
}
