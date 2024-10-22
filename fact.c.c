#include <stdio.h>
#include <stdlib.h>
	int main(){    
	int x,y=1,num;   
	printf("Enter a number to find factorial: ");   
	scanf("%d",&num);    
	for(x=1;x<=num;x++)   
		y=y*x;    
	printf("Factorial of %d is: %d",num,y);
 }
