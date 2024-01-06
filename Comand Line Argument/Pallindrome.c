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
	int len,i,j;
	len=strlen(s);
	for(i=0;j=len-1,i<=len/2;i++,j--)
	{
		if(s[i]!=s[j])
		{
			return 0;
		}
	}
	return 1;
}
