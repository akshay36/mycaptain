#include <stdio.h> 
int main() 
{ 
	int x, y; 
  printf("enter two numbers x and y:");
  scanf("%d %d",&x,&y);
	// Code to swap 'x' and 'y' 
	x = x * y; 
	y = x / y;
	x = x / y;
	printf("After Swapping: x = %d, y = %d", x, y); 
	return 0; 
} 
