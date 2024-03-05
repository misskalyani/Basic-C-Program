#include<stdio.h>
int gcd(int x,int y)
{
	if(y==0)
	  return x;
	else
	  return gcd(y,x%y);
}
/*kalyani
void main()
{
	int x,y;
	printf("Enter x and y::");
	scanf("%d%d",&x,&y);
	printf("\nGCD=%d",gcd(x,y));
}
