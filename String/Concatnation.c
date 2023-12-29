#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	printf("Enter First String::");
    gets(str1);
    printf("\nEnter Second String::");
    gets(str2);
    if(strcmp(str1,str2)==0)
    {
    	printf("\nLength=%d",strlen(str2));
	}
	else if(strcmp(str1,str2)>0)
    {
    	printf("\nConcatnation=%s",strcat(str1,str2));
	}
	else if(strcmp(str1,str2)<0)
    {
    	printf("\nConcatnation=%s",strcat(str1,str2));
	}
}
