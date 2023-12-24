#include<stdio.h>
void main()
{
	int n,i=2,f=0;
	printf("Enter Number::");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
		i++;
		
	}
	if(f==0)
	printf("n Is Prime");
	else
	printf("n Is NOT Prime");
}
