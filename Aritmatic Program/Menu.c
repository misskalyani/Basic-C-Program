#include<stdio.h>
void main()
{
	int x,y,n,t,ch;
	printf("MENU");
	printf("\n1-Equality");
	printf("\n2-Less Than");
	printf("\n3-Qouoitent and Remainder");
	printf("\n4-Range");
	printf("\n5-Swap");
	printf("\nEnter Numbers::");
	scanf("%d%d",&x,&y);
	printf("\nEnter Choice::");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:if(x==y)
		       { 
		           printf("Equal");
			   }
			   else
			   {
			   	   printf("Not Equal");
			   }
	    case 2:if(x<y)
		       { 
		           printf("X is Less Than Y");
			   }
			   else
			   {
			   	   printf("X is Not Less Than Y");
			   }
		case 3:printf("Quotient=%d\nRemainder=%d",x/y,x&y);
		       break;
		case 4:printf("Enter Number::");
		       scanf("%d",&n);
		       if(n>=x&&n<=y)
		       { 
		           printf("Between");
			   }
			   else
			   {
			   	   printf("Not Between");
			   }
		case 5:t=x;
		       x=y;
			   y=t;
			   printf("After Swap x=%d\ny=%d",x,y);
			   break;
			      		   
	}
}
