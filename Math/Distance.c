#include<stdio.h>
#include<math.h>
int main()
{
	float d,x1,x2,c2,y1,y2,a,b;
	printf("Enter X Coordinates::");
	scanf("%f%f",&x1,&x2);
	printf("\nEnter Y Coordinates::");
	scanf("%f%f",&y1,&y2);
    a=(x2*x2)-2*x2*x1+(x1*x1);
    b=(y2*y2)-2*y2*y1+(y1*y1);
    d=sqrt(a+b);
    printf("\nDistance=%f",d);
}
