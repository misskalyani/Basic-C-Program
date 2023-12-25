#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Search(int s1[],int n,int num)
{
	int i;	
	for(i=0;i<n;i++)
	{
		if(s1[i]==num)
		{
	      return i;
	    }
	}
	return -1;
}
int main()
{
	int i,n,flag,num,s1[20];
	printf("enter limit::");
	scanf("%d",&n);
	printf("enter elements::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s1[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",s1[i]);
	}
	printf("\nenter num to search::");
	scanf("%d",&num);
	flag=Search(s1,n,num);
	if(flag==-1)
	printf("num NOT found");
	else
	printf("num found pos=%d ",flag);
}
