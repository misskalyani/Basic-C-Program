#include<stdio.h>
int main()
{
	int a[100],i,n,ch,s;
	printf("ENTER LIMIT::");
	scanf("%d",&n);
	printf("ENTER N NUMBRES::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	do
	{
		s=0;
		printf("\n1-Even Postion Sum::");
		printf("\n2-Odd Postion Sum::");
		printf("\nENTER CHOICE::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:for(i=0;i<n;i++)
			       {
			       	    if(i%2==0)
			       	      s=s+a[i];
				   }
				   printf("\nEven Position Sum=%d",s);
				   break;
			case 2:for(i=0;i<n;i++)
			       {
			       	    if(i%2!=0)
			       	      s=s+a[i];
				   }
				   printf("\nOdd Position Sum=%d",s);
				   break;  
			
		}
	
	}while(ch!=0);
}
