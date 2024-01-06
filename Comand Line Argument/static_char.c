#include<stdio.h>
#include<string.h>
int main()
{
	char *s="Computer World";
	char *p[40]={s,s+9,s+4,s+6};
	printf("%s",*(p+1));
	printf("\n%s",*(p+3));
}
