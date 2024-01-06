#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	int i;
	char ch1,ch2,str[80];
	if(argc!=4)
	{
		printf("Invalid Number Of argument");
		printf("Usage-<Programname><string><character><character>");
		exit(0);
	}
	strcpy(str,argv[1]);
	ch1=argv[2][0];
	ch2=argv[3][0];
	for(i=0;str[i]='\0';i++)
	{
		if(str[i]==ch1)
			str[i]=ch2;
	}
	printf("The Replaced string is %s",str);
}
