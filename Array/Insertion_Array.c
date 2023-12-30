
#include <stdio.h> 
#include <process.h> 
#define MAX 100 
int main() 
{ 
 	int size=0,a[MAX]; 
 	int i,element,index; 
 	printf("Enter the value of n:\n"); 
 	scanf("%d", &size); 
 	printf("Enter n elements:\n"); 
 	for (i = 0; i < size; i++) 
 	scanf("%d", &a[i]); 
 	printf("\nElements in Array before Insertion\n"); 
 	for(i=0;i<size;i++) 
 	printf("%d ",a[i]); 
 	printf("\nEnter the element to be inserted :\n"); 
 	scanf("%d", &element); 
 	printf("Enter the index where element to be inserted:\n"); 
 	scanf("%d", &index); 
 	if(index<0 || index>size-1) 
 	{ 
 		printf("Invalid index \n"); 
 		return 0; 
 	} 
 	else 
 	{ 
 		for (i = size-1; i >= index; i--) 
 		{ 
 			a[i+1] = a[i]; 
 		} 
 		size++; 
 		a[index] = element; 
 	} 
 	printf("Elements in Array after Insertion\n"); 
 	for(i=0;i<size;i++) 
 	printf("%d ",a[i]); 
 	return 0; 
}
