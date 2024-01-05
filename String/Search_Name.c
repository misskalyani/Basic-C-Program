#include<stdio.h>
#include<string.h>
void main()
{
	char list[20][20],name[20];
	int i,n;
	printf("\nHow Many names::");
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		printf("\nenter Name %d :",i+1);
		gets(list[i]);
	}
	printf("Enter The Name To seach::");
	gets(name);
	for(i=0;i<n;i++)
	{
		if(strcmp(list[i],name)==0)
		{
			printf("\nName Found     \nPosition=%d",i);
			break;
		}
	}
	if(i==n)
	{
		printf("Name Not found in the list");
	}
}
