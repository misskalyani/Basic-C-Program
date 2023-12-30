#include <stdio.h> 
#include <process.h> 
#define MAX 100 
	int num=0,a[MAX]; 
	void create(); 
	void insert(); 
	void delete(); 
	void display(); 
	int main() 
	{ 
 		int ch; 
 		printf("Array Menu"); 
 		printf("\n1.Create\n2.Insert\n3.Delete\n4.Display\n5.Exit"); 
 		while(1) 
 		{ 
			 printf("\nEnter your choice::"); 
 			 scanf("%d",&ch); 
 			 switch(ch) 
			 { 
 				case 1: create(); 
 						break; 
 				case 2: insert(); 
 						break; 
 				case 3: delete(); 
 						break; 
				case 4: display(); 
 						break; 
 				case 5: exit(0); 
 				default: printf("\nWrong Choice!!"); 
 			} 
 		} 
	return 0; 
	} 
void create() 
{ 
 	int i; 
	printf("Enter the value of n:\n"); 
 	scanf("%d", &num); 
 	printf("Enter n elements:\n"); 
	for (i = 0; i < num; i++) 
 	scanf("%d", &a[i]); 
} 
void insert() 
{ 
 	int i,element,index; 
 	printf("Enter the element to be inserted :\n"); 
 	scanf("%d", &element); 
	printf("Enter the index after which element to be inserted:\n"); 
 	scanf("%d", &index);  
 	for (i = num-1; i >= index; i--) 
 	{ 		
 		a[i+1] = a[i]; 
 	} 
 	num++; 
 	a[index] = element; 
} 
void delete() 
{ 
 	int i,index; 
 	printf("Enter index of the element to be deleted :\n"); 
 	scanf("%d", &index); 
 	for (i = index+1; i <= num-1; i++) 
 	{ 
 		a[i-1] = a[i]; 
 	} 
 	num--; 
} 
void display() 
{ 
	int i; 
 	printf("Elements in Array\n"); 
 	for(i=0;i<num;i++) 
 	printf("%d ",a[i]); 
} 

