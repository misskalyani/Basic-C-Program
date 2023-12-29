#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("Enter String::");
	gets(str1);
	strcpy(str2,str1);
	printf("\nLength=%d",strlen(str2));
}
