#include<stdio.h>
#include<string.h>
int charcount(char *s,char ch)
{
	int count=0;
	while(*s!='\0')
	{
		if(*s==ch)	
	   		count++;
		s++;
	}
	return count;
}
char *copystring(char *t,char *s)
{
	char *temp=t;
	while(*s!='\0')
	{
		*t=*s;
		t++;
		s++;
	}
	*t='\0';
	return temp;
}
char *uppercase(char *s)
{
	char *temp=s;
	while(*s!='\0')
	{
		if(islower(*s))
			toupper(*s);
		s++;
	}
	return temp;
}
int main()
{
	char s1[20]="ABCDEF",s2[20]="HelloWorld";
	printf("%d",charcount(s2,'l'));
	printf("\n%s",uppercase(s2));
	printf("\n%s",copystring(s2,s1));
}

