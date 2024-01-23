#include<stdio.h>
int main()
{
	int a[100],i,n,b[100];
	printf("Enter Limit::");
	scanf("%d",&n);
	printf("Enter n Numbers::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i]*a[i];
	}
	printf("\nFirst Array::");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nSquare Array::");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	
}
