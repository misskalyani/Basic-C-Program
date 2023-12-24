#include<stdio.h>
int main()
{
	int a[100],i,n,x,y;
	printf("Enter Limit::");
	scanf("%d",&n);
	printf("\nEnter n Numbers ::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray Numbers Are::");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
	printf("\nEnter Number to Find::");
	scanf("%d",&x);
	printf("\nEnter Number to Replace::");
	scanf("%d",&y);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			a[i]=y;
		}
	}
	printf("\nReplace Array::");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
}
