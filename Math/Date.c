#include<stdio.h>
void main()
{
	int dd,mm,yy;
	printf("Enter Day,Month and Year::");
	scanf("%d%d%d",&dd,&mm,&yy);
	if(mm>=1&&mm<=12)
	{
		if(mm==4||mm==6||mm==9||mm==11)
		{
			if(dd>=1&&dd<=30)
			{
				printf("Date Is Valid");
			}
			else
			{
				printf("Date Is NOT Valid");
			}
		}
		else if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
		{
			if(dd>=1&&dd<=31)
			{
				printf("Date Is Valid");
			}
			else
			{
				printf("Date Is NOT Valid");
			}
		}
		else if(mm==2)
		{
		    if(yy%4==0)
		    {

			     if(dd>=1&&dd<=29)
		         {
				    printf("Date Is Valid");
			     }
			     else
			     {
				    printf("Date Is NOT Valid");
			     }
	        }
	        else if(dd>=1&&dd<=28)
		         {
				    printf("Date Is Valid");
			     }
			     else
			     {
				    printf("Date Is NOT Valid");
			     }
		}
	}
	else
	{
		printf("Date is NOT Valid");
	}
}
