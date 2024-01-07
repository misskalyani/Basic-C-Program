#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *f1;
	char ch;
	char fname[20];
	int c1=0,c2=0,c3=0,INWORD=0;
	printf("Enter Filename::");
	scanf("%s",fname);
	f1=fopen(fname,"r");
	if(f1==NULL)
	{
		printf("File Not Found");
		exit(0);
	}
	while((ch=fgetc(f1))!=EOF)
	{
		c1++;
		if(ch=='\n')
			c2++;
		if((ch==' ')||(ch=='\n')||(ch==',')||(ch==';'))
		{
			if(INWORD==1)
				c3++;
			INWORD=0;
		}
	}
	fclose(f1);
	printf("NUmber of character = %d\n",c1);
	printf("NUmber of Lines = %d\n",c2);
	printf("NUmber of Words = %d\n",c3);
}
