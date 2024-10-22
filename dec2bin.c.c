#include <stdio.h>
#include <stdlib.h>
	int main(){    
	   int n,binary=0,rem=0,dig=1 ;
	printf(" Enter a decimal number : ");   
	scanf("%d",&n);
	while (n!=0)
	{
		rem = n%2;
		n=n/2;
		binary =binary +(dig * rem);
		dig =dig *10;
	}
	printf(" binary number : %d",binary);   
}