#include<stdio.h>
#include<math.h>
void main()
{
	float n,i=1,x,sum=0;
	printf("Enter Number of terms::");
	scanf("%f",&n);
	printf("\nEnter Value Of x::");
	scanf("%f",&x);
	while(i<=n)
	{
		sum=sum+i/pow(x,i);
		i++;
	}
	printf("Sum=%f",sum);
}
