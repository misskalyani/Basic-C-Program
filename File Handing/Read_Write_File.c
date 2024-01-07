#include<stdio.h>
#include<stdlib.h>
void main()
{
	char c;
	FILE *fp;
	fp=fopen("data.txt","w");
	if(fp==NULL)
	{
		printf("File Not Found");
		exit(0);
	}
	printf("Enter the data ctrl+z to terminate\n::");
	while((c=getchar())!=EOF)
	{
		fputc(c,fp);
	}
	fclose(fp);
	fp=fopen("data.txt","r");
	if(fp==NULL)
	{
		printf("File Not Found");
		exit(0);
	}
	printf("the data in the file\n::");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
