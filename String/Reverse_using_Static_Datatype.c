#include<stdio.h>
int reverse(int n)
{
	static int r=0;
	int d;
	if(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
		reverse(n);
	}
	return r;
}
int main()
{
	printf("\nReverse Number=%d",reverse(341));	
}
