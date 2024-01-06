#include<stdio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char s[60],reverse[78]=" ",*p;
	puts("Enter Sentecnce::");
	gets(s);
	p=strtok(s," ");
	while(p)
	{
		strrev(p);
		strcat(reverse,p);
		strcat(reverse," ");
		p=strtok(NULL," ");
	}
	puts(reverse);
}
