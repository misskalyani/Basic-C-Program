#include<stdio.h>
void time(int *hr,int*min,int*ss,int*s)
{
	*ss=*ss+*s;
	*min=*min+(*ss/60);
	*hr=*hr+(*min/60);
	*ss=*ss%60;
	*min=*min%60;
}
void main()
{
	int hr,min,ss,s;
	printf("Enter Time in Hour minute second::");
	scanf("%d%d%d",&hr,&min,&ss);
	printf("\nEnter Time To ADD::");
	scanf("%d",&s);
	printf("Time=%dhr\n%dmin\n%dss",hr,min,ss);
	time(&hr,&min,&ss,&s);
	printf("\nNew Time=%dhr\n%dmin\n%dss",hr,min,ss);
}
