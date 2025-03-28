#include <stdio.h>

int main(){

    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num < 0){
        printf("-");
        num = -num;
    }

    while(num > 0){
        printf("%d\n", num % 10); // num%10 for extracting the last digit
        num = num / 10; //for removing the last digit
    }

    return 0;
}
