#include<stdio.h>
int main()
{
	int amt,one,five,ten;
	printf("Enter Amount::");
	scanf("%d",&amt);
	one=amt/1;
	five=amt/5;
	ten=amt/10;
	printf("\nOne=%d\tFive=%d\tTen=%d",one,five,ten);
}
