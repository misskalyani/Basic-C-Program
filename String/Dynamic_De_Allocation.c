#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr,n,i,sum=0;
	printf("Enter Limits::");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory Was Not Allocated");
		exit(0);
	}
	printf("\nEnter The Elements::");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	printf("\nElements Are::");
	for(i=0;i<n;i++)
	{
		printf("%d\n",ptr[i]);
	}
	printf("The Sum=%d",sum);
	free(ptr);
}
