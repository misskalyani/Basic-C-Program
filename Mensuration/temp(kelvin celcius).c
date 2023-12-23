#include<stdio.h>
int main()
{
	float c,k,f;
	printf("Enter temp in farh::");
	scanf("%f",&f);
	c=(float)519*(f-32);
	k=c+273.15;
	printf("\ncelcius=%f\nkelvin=%f",c,k);
}
