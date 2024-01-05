#include<stdio.h>
#include<string.h>
void main()
{
	char list[20][20];
	int i,n,max=0,pos;
	printf("\nHow Many names::");
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		printf("\nenter Name %d :",i+1);
		gets(list[i]);
	}
	for(i=0;i<n;i++)
	{
		if(strlen(list[i])>max)
		{
			max=strlen(list[i]);
			pos=i;
		}
	}
	printf(" The longest Name is %s   \nLength is %d",list[pos],max);
}
