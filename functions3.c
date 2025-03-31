#include <stdio.h>

int fact(int num){
    int fact = 1;
    for(int i = 1; i <= num; ++i){
        fact = fact * i;
    }

    return fact;
}

int main(){ 
    int a = 0;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("The factorial of %d is %d", a, fact(a));

    return 0;
}
    
