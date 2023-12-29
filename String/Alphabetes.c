#include<stdio.h>
#include<ctype.h>
void main()
{
	char str[50];
	int i;
	printf("Enter Sentence::");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(isupper(str[i]))
		{
			str[i]=tolower(str[i]);
		}
		else if(islower(str[i]))
		{
			str[i]=toupper(str[i]);
		}
		else if(str[i]=' '||str[i]=='\t')
		{
			str[i]='*';
		}
		else if(isdigit(str[i]))
		{
			str[i]='?';
		}
	}
	puts(str);
}
