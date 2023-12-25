#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Search(int s1[],int n,int num)
{
	int i,cnt=0,f=0;	
	for(i=0;i<n;i++)
	{
		if(s1[i]==num)
		{
	       cnt++;
	       f=1;
	    }
	}
	if(f==1)
	   return cnt;
	else
	   return 0;   
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
	if(flag==0)
	printf("num NOT found");
	else
	printf("\nOccurence=%d\nTimes=%d ",num,flag);
}
