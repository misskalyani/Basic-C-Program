#include<stdio.h>
void series(int n)
{
	static int f=0,s=1,t;
	if(n>0)
	{
		t=f+s;
		f=s;
		s=t;
		printf("%d\t",t);
		series(n-1);
	}
}
/*kalyani
int main()
{
	series(10);
}
