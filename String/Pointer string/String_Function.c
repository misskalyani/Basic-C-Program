#include<stdio.h>
#include<string.h>
int main()
{
	static char *s[]={"Red","Blue","Yellow"};
	char **ptr[]={s+2,s+1,s};
	char ***p=ptr;
	printf("\n%s",**p);
	printf("\n%s",**++p);
	printf("\n%s",*++*++p+2);
	printf("\n%s",*p[-2]+3);
}
