#include <stdio.h>  
struct student  
{  
   char a;  
   char b;  
   int c;  
};  
int main()  
{  
   struct student stud1; 
   printf("The size of the student structure is %d", sizeof(stud1));  
}  
