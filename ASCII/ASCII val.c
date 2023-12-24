#include<stdio.h>
int main()
{
	char ch;
	printf("Enter Character::");
	scanf("%c",&ch);
	if(ch>=48&&ch<=57)
	{
		printf("DIGIT");
	}
	else if(ch>=65&&ch<=90)
	{
		printf("UPPERCASE");
	}
	else if(ch>=97&&ch<=122)
	{
		printf("LOWERCASE");
	}
}
