#include <stdio.h>
#include <stdlib.h>
 int main() {
	 int n,i,x=0;
	 printf("enter an integer: ");
	 scanf("%d",&n);
	 for(i=2;i<n;i++){
	 if (n%i==0){
		 x++;
	 }
	 }
	 if (x==0){
		printf(" --> %d is a prime no ",n);
	 }
	 else{
		  printf(" --> %d is not a prime no ",n);
	 }
 }