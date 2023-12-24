#include<stdio.h>
void main()
{
	float area,,cir,vol,r;
	int ch;
	printf("MENU");
	printf("\n1-Area Of Circle::");
	printf("\n2-Circumference Of Circle::");
	printf("\n3-Volume Of Sphere::");
	printf("\nEnter Radius::");
	scanf("%f",&r);
	printf("\nEnter Your Choice::");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:area=3.14*r*r;
		       printf("\nArea Of Circle=%f",area);
		       break;
		case 2:cir=2*3.14*r;
		       printf("\nCircumference Of Circle=%f",cir);
		       break;     
	    case 2:vol=(float)4/3*2*3.14*r*r*r;
		       printf("\nVolume Of Sphere=%f",vol);
		       break;     	       
	}
	
}
