#include<stdio.h>
int main()
{
	int max1,max2;
	int a[100],n,i,s;
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
	max1=a[0];
	for(i=0;i<n;i++)
	{
		if(max1<a[i])
		{
			max2=max1;
			max1=a[i];
		}
	}
	printf("\nMax Number 1=%d",max1);
	printf("\nMax Number 2=%d",max2);
	s=s+max1+max2;
	printf("\nSum=%d",s);
}
