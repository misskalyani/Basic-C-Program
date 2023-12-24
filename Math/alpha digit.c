#include<stdio.h>
void main()
{
	int ch,n,rev=0;
	printf("Enter Number::");
	scanf("%d",&n);
	while(n>0)
	{
		ch=n%10;
		rev=rev*10+ch;
		n=n/10;
	}
	while(rev>0)
	{
		ch=rev%10;
	switch(ch)
    {
		case 1:printf("\nOne");
		       break;
		case 2:printf("\nTwo");
		       break;
		case 3:printf("\nThree");
		       break;
	    case 4:printf("\nFour");
		       break;
		case 5:printf("\nFive");
		       break;
		case 6:printf("\nSix");
		       break;
		case 7:printf("\nSeven");
		       break;
	    case 8:printf("\nEight");
		       break;	
	    case 9:printf("\nNine");
		       break;		
	    case 0:printf("\nZero");
		       break;				   		   	   	   	   	   		          
	}
	rev=rev/10;
 }
}
