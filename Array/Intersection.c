#include<stdio.h>
void main()
{
	int n,n1,a[20],b[20],i,j,k=0,f=0,c[20];
	printf("Enter First Array Limit::");
	scanf("%d",&n);
	printf("Enter Second Array Limit::");
	scanf("%d",&n1);
    printf("\nFirst Array Element Are:: ");
/*kalyani Chaudhari 
	for(i=0;i<n;i++)
	{
			scanf("%d",&a[i]);
	}
	printf("\nSecond Array Element Are:: ");
	for(i=0;i<n1;i++)
	{
			scanf("%d",&b[i]);
	}
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				c[k]=a[i];
				k++;
			}
		}
	}
	printf("\nIntersection::");
	for(i=0;i<k;i++)
	{
		printf("\n%d",c[i]);
	}
}
