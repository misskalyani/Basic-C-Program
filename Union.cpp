#include<stdio.h>
int main()
{
	int a[100],i,n1,n2,f=0,k=0,j,b[100],c[50];
	printf("Enter 1st Array Limit::");
	scanf("%d",&n1);
	printf("Enter 1st Array Limit::");
	scanf("%d",&n2);
	printf("Enter 1st Array Numbers::");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter 2nd Array Numbers::");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++)
	{
		c[k++]=a[i];
	}
	for(i=0;i<n2;i++)
	{
		for(j=0;j<n1;j++)
		{
			if(b[i]==a[j])
			{
				f=1;
				break;
			}
			if(f==1)
			{
				c[k++]=b[i];
			}
		}
	}
	printf("\nUnion::");
	for(i=0;i<n1,i<n2;i++)
	{
		printf("%d\t",c[i]);
	}
}
