#include <stdio.h>

int main(){

    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0 &&  (num & (num - 1)) == 0){
        printf("True");
     } else {
        printf("False");
     }
  
  
    return 0;


}


