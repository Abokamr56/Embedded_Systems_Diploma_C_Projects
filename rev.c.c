#include <stdio.h>
#include <stdlib.h>
	int main(){    
	   int n, rn=0;
	printf(" Enter a number to reverse it : ");   
	scanf("%d",&n);  
   while(n>0){
	   rn=rn*10+(n%10);
	   n=n/10;
   }   
	printf(" reverse is : %d ",rn);
	return 0;
 }