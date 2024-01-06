#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char s[30];
	int ans;
	printf("Enter String::");
	gets(s);
	ans=ispalindrome(s);
	if(ans)
	{
		printf("\nString Is Not Palindrome");
	}
	else
	{
		printf("\nString Is  Palindrome");
	}
}
int ispalindrome(char s[])
{
	char temp[40];
	strcpy(temp,s);
	strrev(s);
	if(strcmp(temp,s)==0)
		return 0;
	else	
		return 1;
}
