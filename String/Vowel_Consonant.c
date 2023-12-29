#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int i;
	printf("Enter String::");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			printf("\nVowels");
		}
		else
		{
			printf("\nConsonant");
		}
	}
}
