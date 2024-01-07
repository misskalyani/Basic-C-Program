#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	char c;
	FILE *fp;
	if(argc!=2)
	{
		printf("Invalid No of Arguments");
		exit(0);
	}
	fp=fopen(argv[1],"r");
	printf("\n The data in the File\n::");
	while(!feof(fp))
	{
		c=fgetc(fp);
		printf("%c",c);
	}
	fclose(fp);
}
