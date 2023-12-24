#include<stdio.h>
int main()
{
	int i,m,j;
	for(i=1;i<10;i++)
	{
		for(j=2;j<=9;j++)
		{
			m=j*i;
			printf("%dx%d=%d\t",j,i,m);
		}
		printf("\n");
	}
}
