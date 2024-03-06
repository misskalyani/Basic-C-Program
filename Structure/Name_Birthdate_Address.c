 #include<stdio.h>
 struct person
 {
 	char name[20],addr[20];
 	struct birthdate
 	{
 	 	int  dd,mm,yy;	
	}d;
 };
 void main()
 {
 	struct person p[20];
 	int n,i;
 	printf("\nEnter Number Of Person::");
 	scanf("%d",&n);/*by kalyani Chaudhari 
 	for(i=0;i<n;i++)
 	{
 		printf("\nEnter Name And Address Of Person::");
		scanf("%s%s",p[i].name,p[i].addr);
		printf("\nEnter BirthDate::");
		scanf("%d%d%d",&p[i].d.dd,&p[i].d.mm,&p[i].d.yy);
	}
	printf("\nNAME\tADDRESS\tBIRTHDATE::");
	printf("\n===========================");
	for(i=0;i<n;i++)
	{
		printf("\n%s\t%s\t%d\t%d%d%d",p[i].name,p[i].addr,p[i].d.dd,p[i].d.mm,p[i].d.yy);
	}
 }
