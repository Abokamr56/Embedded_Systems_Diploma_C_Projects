#include <stdio.h>
#include <stdlib.h>
	int main(){    
	   int n,m=0, rn=0,rem ;
	printf(" Enter a number : ");   
	scanf("%d",&n);
     m=n;
	 
   while(n!=0)
   {
	  rem = n%10;
	  rn=rn*10+rem ;
	  n=n/10;
   }
	   if (rn == m)
		     printf("palendrome"); 
	   else 
		  printf(" not palendrome");
	  return 0;
	  
 }