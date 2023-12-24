#include<stdio.h>
void main()
{
	int choice,r,l,w,b,h;
	float area;
	printf("MENU");
	printf("\n1-Area Of Circle::");
	printf("\n2-Area Of Rectangle::");
	printf("\n3-Area Of Triangle::");
	printf("\nEnter Your Choice::");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("Enter Length Of Side Of Square::");
		       scanf("%d",&r);
		       area=r*r;
		       break;
		case 2:printf("Enter Length Width Of Side Of Rectangle::");
		       scanf("%d",&l,&w);
		       area=l*w;
		       break;
		case 1:printf("Enter Base Height Of Side Of Square::");
		       scanf("%d",&b,&h);
		       area=0.5*b*h;
		       break; 
					
	}
}
