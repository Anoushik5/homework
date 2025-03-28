#include <stdio.h>

int main(){

     char str[10];
     scanf("%s", str);

     for(int i = 0; i < 10; ++i){
         if(str[i] >= 'a' && str[i] <= 'z'){
             str[i] -= 32; 
         }
     }

     printf("%s", str);

     return 0;
     
    }
