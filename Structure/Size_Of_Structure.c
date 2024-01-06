#include <stdio.h>  
#pragma pack(1)  
struct base  
{  
    int a;  
    char b;  
    double c;  
};  
int main()  
{  
  struct base var; 
  printf("The size of the var is : %d", sizeof(var));  
}  
