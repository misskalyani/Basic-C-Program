#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char str1[20],str2[20];
	int ch,i;
	printf("MENU");
	printf("\n1-Length");
	printf("\n2-Reverse");
	printf("\n3-Compare");
	printf("\n4-Concatnation");
	printf("\n5-Copy");
	printf("\n6-Upper");
	printf("\n7-Lower");
	printf("\nEnter First String::");
	gets(str1);
	printf("\nEnter Second String::");
	gets(str2);
	printf("\nEnter Choice::");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\nLength Of First string=%d",strlen(str1));
		       printf("\nLength Of Second string=%d",strlen(str2));
		       break;
		case 2:for(i=strlen(str1)-1;i>=0;i--)
			   {
			   		printf("\n%c",str1[i]);
			   }
			   break;
	    case 3:printf("\nCopy string=%d",strcpy(str1,str2));
		       break;
		case 4:if(strcmp(str1,str2)==0)
			   {
			   		printf("\nEqual");
			   }
			   else if(strcmp(str1,str2)>0)
			   {
			   		printf("\nFirst is Greater");
			   }
			   else if(strcmp(str1,str2)<0)
			   {
			   		printf("\nSecond is Greater");
			   }
			   break;
		case 5:printf("\nConcat string=%d",strcat(str1,str2));
		       break;
	    case 6:	for(i=0;str1[i]!='\0';i++)
				{
					if(islower(str1[i]))
					{
						str1[i]=toupper(str1[i]);
					}		    
			    }
			    printf("\nUpper=%s",str1);
			    break;
		case 7:for(i=0;str1[i]!='\0';i++)
				{
					if(isupper(str1[i]))
					{
						str1[i]=tolower(str1[i]);
					}		    
			    }
			    printf("\nLower=%s",str1);	    
	            break;
	    }
		
}
