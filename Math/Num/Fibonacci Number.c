#include<stdio.h>
void main()
{
	int n,a=1,b=1,c,i=1;
	printf("Enter Number Of terms::");
	scanf("%d",&n);
	printf("%d\t%d",a,b);
	do
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
		i++;
	}
	while(i<n-1);
}
