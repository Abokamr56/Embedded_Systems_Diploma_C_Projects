#include <stdio.h>
#include <stdlib.h>
	int main(){    
	int n1,n2;   
	printf("Enter a number1 : ");   
	scanf("%d",&n1);    
	printf("Enter a number2 : ");   
	scanf("%d",&n2); 
	
	while(n1!=n2){
		if (n1>n2){
			n1-=n2;
		}
		else {
			n2-=n1;
		}
	}
	printf("GCD of two no's is %d",n1);
 }