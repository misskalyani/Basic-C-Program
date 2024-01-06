#include<stdio.h>
void main(int argc,char *argv[])
{
	int i;
	printf("Number Of Arguments::%d\n",argc);
	printf("\nThe Arguments Are::");
	for(i=0;i<argc;i++)
	{
		printf("%s\n",argv[i]);
	}
}
