#include<stdio.h>
#include<stdlib.h>
void main()
{
	char c;
	FILE *fp;
	fp=fopen("a.txt","r");
	if(fp==NULL)
	{
		printf("File Not Found");
		exit(0);
	}
	printf("\n The data in the File\n::");
	while(!feof(fp))
	{
		c=fgetc(fp);
		printf("%c",c);
	}
	fclose(fp);
}
