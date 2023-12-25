#include<stdio.h>
int power(int x,int y)
{
	if(y==1)
	  return x;
	else
	  return x*power(x,y-1);  
}
void main()
{
	int x,y;
	printf("Enter x and y::");
	scanf("%d%d",&x,&y);
	printf("\nPOWER=%d",power(x,y));
}
