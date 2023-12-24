#include<stdio.h>
void main()
{
	char ch;
	int n,i=1;
	printf("Enter Character::");
	scanf("%c",&ch);
	printf("Enter Number::");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\n%c",ch+i);
		i++;
	}
}
