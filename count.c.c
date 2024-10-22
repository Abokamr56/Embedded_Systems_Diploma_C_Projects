#include <stdio.h>
#include <stdlib.h>
	int main(){    
	   int n,counter=0;
	printf(" Enter a number : ");   
	scanf("%d",&n);
	while (n!=0)
	{
		n=n/10;
		counter++;
	}
	  printf("counter =  %d",counter);
}