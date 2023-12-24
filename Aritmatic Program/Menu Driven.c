#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("MENU");;
	printf("\n1-ADDITION");
	printf("\n2-SUBTRACTION");
	printf("\n3-MULTIPLICATION");
	printf("\n4-DIVISION");
	printf("\n5-FRACTION");
	printf("\nEnter Choice::");
	scanf("%d",&ch);
	printf("\nEnter Numbers Are::");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case 1:printf("\nADD=%d",a+b);
		         break;
		case 2:printf("\nSUB=%d",a-b);
		         break;     
		case 3:printf("\nMUL=%d",a*b);
		         break;
		case 4:printf("\nDIV=%d",a/b);
		         break; 
		case 5:printf("\nFRACTION=%d",a%b);		    
	}
}
	
