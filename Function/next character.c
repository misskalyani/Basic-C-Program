#include<stdio.h>
void ischar(char ch,int n);
void main()
{
	char ch;
	int n;
	printf("Enter Character::");
	scanf("%c",&ch);
    printf("Enter Limit::");
	scanf("%d",&n);
    ischar(ch,n);	
}
void ischar(char ch,int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("\t%c",ch+1);
	}
}
