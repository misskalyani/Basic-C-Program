#include<stdio.h>
#include<string.h>
void main()
{
	char name[20][20],temp[20];
	int i,n,j,pass;
	printf("\nHow Many names::");
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		printf("\nenter Name %d :",i+1);
		gets(name[i]);
	}
	for(pass=1;pass<=n-1;pass++)
	{
		for(j=0;j<=n-pass-1;j++)
		{
			if(strcmp(name[j],name[j+1])>0)
			{
				strcpy(temp,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp);
			}
		}
	}
	printf("\nSorted names are::\n");
	for(i=0;i<n;i++)
	{
		puts(name[i]);
	}
}
