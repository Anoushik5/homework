#include <stdio.h>

void binary(int n);

int main(){

    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    binary(num);

    return 0;
    }

void binary(int n){

    if(n > 1){
        binary(n / 2);
        
    }

    
    printf("%d\n", n % 2);

}

