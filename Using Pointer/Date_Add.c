#include<stdio.h>
void date(int *dd,int*mm,int*yy,int*d)
{
	*dd=*dd+*d;
	*dd=*dd%30;
	if(*mm<=12)
	{
		printf("Month=%d",*mm);
		*mm++;
	}
	*yy=*yy+1;
}
void main()
{
	int dd,mm,yy,d;
	printf("Enter Date in dd mm yy::");
	scanf("%d%d%d",&dd,&mm,&yy);
	printf("\nEnter Date To ADD::");
	scanf("%d",&d);
	printf("Date=%ddd\n%dmm\n%dyy",dd,mm,yy);
	date(&dd,&mm,&yy,&d);
	printf("\nNew Date=%ddd\n%dmm\n%dyy",dd,mm,yy);
}
