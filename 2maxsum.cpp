#include<stdio.h>
int main()
{
	int max1,max2;
	int a[100],n,i,s;
	printf("enter limit::");
	scanf("%d",&n);
	printf("Enter Numbers::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max1=a[0];
	for(i=0;i<n;i++)
	{
		if(max1<a[i])
		{
			max2=max1;
			max1=a[i];
		}
	}
	printf("Max Number1=%d",max1);
	printf("Max Number2=%d",max2);
	s=s+max1+max2;
	printf("\nSum=%d",s);
}
