#include<stdio.h>
int main()
{
	int i,j,k,n=0;
	for(i=0;i<5;i++)
	{
		n++;
		for(k=0;k<n;k++)
			printf(" ");
		for(j=0;j<5;j++)
			printf("*");
		printf("\n");
	}
}
