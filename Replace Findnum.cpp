#include<stdio.h>
int main()
{
	int a[100],i,n,x,y;
	printf("Enter Limit::");
	scanf("%d",&n);
	printf("Enter n Numbers::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Number To find::");
	scanf("%d",&x);
	printf("Enter Number To search to replace::");
	scanf("%d",&y);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			a[i]=y;
		}
	}
	printf("\nReplace Array=");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
