#include <stdio.h>
#include <stdlib.h>
// HALF PYRAMID OF NUMBERS**
int main(){
   int x,rows;
    printf("ENTER NO OF ROWS:");
    scanf("%d",&rows);
 for (int x = 1; x<=rows; x++ ){
    for (int y = 1; y<=x;y++){
        printf("%d",y);
    }
 printf("\n");
 }
}
