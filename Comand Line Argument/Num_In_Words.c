#include<stdio.h> 
#include<conio.h>
char *str1[]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twenteen","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Ninteen"};
char *str2[]={"","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninty"};
void words(int num)
{
	int q;
	if(num<=19)
	{
		printf( "  %s ",str1[num]);
	}
	else
	{
		if(num<100)
		{
			words(num/100);
			printf("  %s  ",str2[num/10]);
			words(num%10);
		}
		else
		{
			if(num<1000)
			{
				words(num/100);
				printf("  Hundred ");
				words(num%100);
			}
			else
			{
				words(num/1000);
				printf("Thousand  ");
				words(num%1000);
			}
		}
	}
}
void main()
{
	unsigned int num;
	printf("Enter Number::");
	scanf("%d",&num);
	words(num);
}
