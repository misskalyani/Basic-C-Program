#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5};
	void disp(int *ptr,int n);
	disp(a,5);
}
	void disp(int *ptr,int n)
	{
		int i;
		printf("Array Elements Are::");
		for(i=0;i<n;i++)
		{
			printf("%d\t",ptr[i]);
		}
	}
