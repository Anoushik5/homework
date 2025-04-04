#include <stdio.h>

int addition(int num);

int main(){

    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = addition(num);
    printf("%d", result);

    return 0;
    }

int addition(int num){
    
    int sum = 0;

    if(num == 0){
        return 0;
    }
    return(num % 10) + addition(num / 10);

    }

