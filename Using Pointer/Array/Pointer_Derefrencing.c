#include<stdio.h>
void main()
{
	int n=20,*ptr;
	ptr=&n;
	printf("Direct Access,Value=  %d",n);
	printf("\n\nIndirect Access,Value=  %d",*ptr);
	printf("\n\nAdreess of n=%u",&n);
	printf("\n\nAdreess of n using =  %u",ptr);
	n=30;
	printf("\n\nDirect Modification,Value=   %d  %d",n,*ptr);
	*ptr=50;
	printf("\n\nInirect Modification,Value=  %d  %d",n,*ptr);
}
