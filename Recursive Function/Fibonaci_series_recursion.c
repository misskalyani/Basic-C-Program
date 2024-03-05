#include<stdio.h>
void series(int f,int s,int n)
{
	int t;
	if(n>0)
	{
		t=f+s;
		printf("%d\t",t);
		f=s;
		s=t;
		series(f,s,n-1);
	}
		
}
/*kalyani
void main()
{
	printf("01");
	series(0,1,10);
}
