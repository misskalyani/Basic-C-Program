#include<stdio.h>
#include<string.h>
int length(char *s)
{
	int count=0;
	while(*s!='\0')
	{
		count++;
		s++;
	}
	return count;
}
int main()
{
	printf("Lenght Of string=%d::",length("Hello"));
}
