#include<stdio.h>
void main()
{
	int n,n1,a[20],b[20],i,j,k=0,f=0,c[20];
	printf("Enter First Array Limit::");
	scanf("%d",&n);
	printf("Enter Second Array Limit::");
	scanf("%d",&n1);
    printf("\nFirst Array Element Are:: ");
	for(i=0;i<n;i++)
	{
			scanf("%d",&a[i]);
	}
	printf("\nSecond Array Element Are:: ");
/*kalyani Chaudhari 
	for(i=0;i<n1;i++)
	{
			scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
			c[k]=a[i];
			k++;
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n;j++)
	      {
	      	f=0;
			if(b[i]==a[j])
			{
				f=1;
			}
	      }
	      if(f==0)
	      {
	      	c[k]=b[i];
	      	k++;
		  }
	}
	printf("\nUnion::");
	for(i=0;i<k;i++)
	{
		printf("\n%d",c[i]);
	}
}
