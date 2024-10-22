#include <stdio.h>
#include <stdlib.h>
	int main(){    
	   int n, rn,sumeven=0,sumodd=0;
	printf(" Enter a number to reverse it : ");   
	scanf("%d",&n);  
   while(n!=0){ 	
	  rn=n%10;
	  
	  if (rn%2==0)
		  sumeven=sumeven+rn;
	  else
		  sumodd = sumodd+rn;
		  n=n/10;
   }   
	printf("oddsum=%d\n",sumodd);
	printf("evensum=%d\n",sumeven);
	return 0;
 }