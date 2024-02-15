#include <stdio.h>
int main ()
{
 int i, j, n,mid; 
 printf("Enter Limit :: ");
 scanf("%d",&n);
 mid=n/2+1;
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=n;j++)
     {
         if(mid==i  || mid==j )
         printf("* ");
         else
         printf("  ");
     }
     printf("\n");
 }

}

    