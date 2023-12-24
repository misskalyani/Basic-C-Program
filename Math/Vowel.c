#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character::");
	scanf("%c",&ch);
	if(ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u')
	{
		printf("VOWEL");
	}
	else
	{
		printf("CONSONANT");
	}
}
