#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr,n,i;
	printf("Enter Limits::");
	scanf("%d",&n);
	ptr=(int*)malloc(n* sizeof(int));
	printf("\nenter The Numbers::");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("\nThe Numbers Are::");
	for(i=0;i<n;i++)
	{
		printf("  %d\t",*(ptr+i));
	}
}
