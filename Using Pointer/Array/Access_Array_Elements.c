#include<stdio.h>
void main()
{
	int a[]={10,20,30,40,50};
	int *ptr,i;
	ptr=a;
	for(i=0;i<5;i++,ptr++)
	{
		printf("\nAddress=%u\n",&a[i]);
		printf("\nElement=%d",a[i],*ptr);
	}
}
