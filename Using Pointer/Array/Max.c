#include<stdio.h>
int main()
{
	int max(int,int);
	int (*ptr_f) (int,int);
	int a,b,result;
	printf("Enter Two Number::");
	scanf("%d %d",&a,&b);
	printf("\nCall Using Function Name");
	result=max(a,b);
	printf("\nMaximum = %d",result);
	printf("\nCall Using Function Pointer");
	ptr_f=max;
	result = ptr_f(a,b);
	printf("Maximum = %d",result);
	return 0;
}
int max(int x,int y)
{
	return x>y?x:y;
}
