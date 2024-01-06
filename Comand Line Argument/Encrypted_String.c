#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	int i,key;
	char str[20];
	if(argc!=3)
	{
		printf("Invalid Number Of argument");
		printf("\nUsage-<Programname><string><key>");
		exit(0);
	}
	strcpy(str,argv[1]);
	key=atoi(argv[2]);
	for(i=0;str[i]!='\0';i++)
	{
		str[i]=str[i]+key;
	}
	printf("The Encrypted String is %s",str);
}
