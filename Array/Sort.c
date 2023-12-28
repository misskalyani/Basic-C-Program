#include<stdio.h>
void accept(int a[],int n)
{
	int i;
	printf("enter numbers:");
	for(i=0;i<n;i++)
	{
		scanf("\t%d\t",&a[i]);
	}
}
void disp(int a[],int n)
{
	int i;
	printf("\n numbers are:");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
}
void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\nsorted order::");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
}
int main()
{
	int a[100],n;
	printf("enter limit:");
	scanf("%d",&n);
	accept(a,n);
	disp(a,n);
	sort(a,n);
}
