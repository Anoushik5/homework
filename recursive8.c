#include <stdio.h>

long long factorial(int num){
    if(num == 0){
        return 1;
    }

    if(num < 0){
        return -1;
    }

    return num * factorial(num - 1);
}

int main(){
    
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    long long result = factorial(num);

    printf("The factorial is %lld", result);

    return 0;

    }
