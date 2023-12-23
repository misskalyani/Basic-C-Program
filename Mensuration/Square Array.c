#include<stdio.h>
int main()
{
	int a[100],i,n,b[100];
	printf("ENTER LIMIT::");
	scanf("%d",&n);
	printf("ENTER N NUMBRES::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i]*a[i];
	}
	printf("\n First Array::");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
    printf("\n Square Array::");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",b[i]);
	}
}
