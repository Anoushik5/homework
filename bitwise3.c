#include <stdio.h>
   
   int main(){
   
       int num = 0;
       int count = 0;
   
       printf("Enter a number: ");
       scanf("%d", &num);
  
      while(num != 0){
          if((num & 1) == 1){
               count++;
      }
          num >>= 1;

      }

      printf("The number of 1 bits is %d", count);
  
      return 0;

}

