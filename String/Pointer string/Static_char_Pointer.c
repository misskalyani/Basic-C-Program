#include<stdio.h>
#include<string.h>
int main()
{
	static char *s[]={"Red","Blue","Yellow"};
	printf("%d",sizeof(s));
	printf("\n%d",sizeof(s[1]));
	printf("\n%d",sizeof(*s[1]));
}
