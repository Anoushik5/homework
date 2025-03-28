#include <stdio.h>

int main(){

    int num = 0;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0){
         if (num & 1 == 1){
            count++;
         }

    num >>= 1;
    }

    printf("Count of 1 bits = %d\n", count);

    return 0;

}
