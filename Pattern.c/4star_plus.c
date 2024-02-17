#include <stdio.h>
int main ()
{
 int i, j, n; 
 printf("Enter Limit :: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=n;j++)
     {
         if((i==2  && j==2) ||(i==2  &&  j==3)  ||(i==3  &&  j==2)   ||(i==3 && j==3 ) )
         printf("   ");
         else
         printf(" * ");
     }
     printf("\n");
 }

}

    