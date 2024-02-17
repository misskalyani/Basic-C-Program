#include<stdio.h>
int main()
{
	char a;
	printf("Enter Character::");
	scanf("%c",&a);
	if(a>0|a==0&&a>9||a==9)
	{
		printf("Character Is Digit");
	}
	else
	 {
		 printf("Character Is NOT Digit");
	 }
}
