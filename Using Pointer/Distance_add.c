#include<stdio.h>
void distance(int *km,int *m,int *ft,int *d)
{
	*ft=*ft+*d;
	*ft=*ft%3000;
	*m=*m+*ft;
	*km=*km+(*m/1000);
	*m=*m%1000;
}
int main()
{
	int km,m,ft,d;
	printf("Enter Distance in km m ft::");
	scanf("%d%d%d",&km,&m,&ft);
	printf("\nEnter Distance To Add::");
	scanf("%d",&d);
	printf("\nDistance=%dkm\n%dm\n%dft",km,m,ft);
	distance(&km,&m,&ft,&d);
	printf("\nNew Distance=%dkm\n%dm\n%dft",km,m,ft);
}
