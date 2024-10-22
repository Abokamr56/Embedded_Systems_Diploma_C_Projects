#include <stdio.h>
#include <stdlib.h>
void main(void){
 char x,y;
   printf("Enter a character:");
   scanf("%c",&y);
if (isalpha(y)){
     printf("%c is an alphabet",y);

}
else {
   printf("%c is  not an alphabet",y);
}
//*****************************************************************
//                another way       *********************
      printf("Enter a character 2:");
      scanf("%c",&x);
      if ((x>'a')&&(x<'z')||(x>'A')&&(x<'Z')){
            printf("%c is an alphabet",x);

}
else{

            printf("%c is  not an alphabet",x);
}
}
