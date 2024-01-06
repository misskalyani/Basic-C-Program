#include <stdio.h>  
#include <string.h>  
struct Employee  
{     
   int id;  
   char name[20];  
   struct Date  
    {  
      int dd;  
      int mm;  
      int yyyy;   
    }date;  
}e1;  
int main( )  
{    
   e1.id=101;  
   strcpy(e1.name, "Ram Chavan"); 
   e1.date.dd=10;  
   e1.date.mm=11;  
   e1.date.yyyy=2014;  
   printf( "employee id : %d\n", e1.id);  
   printf( "employee name : %s\n", e1.name);  
   printf( "employee date of joining (dd/mm/yyyy) : %d/%d/%d\n", e1.date.dd,e1.date.mm,e1.date.yyyy);  
}  
