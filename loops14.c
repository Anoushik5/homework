#include <stdio.h>

int main(){
    
    
    int num1 = 0;
    int num2 = 1;
    int fib = 0;
    int index = 0;

    printf("Enter an index: ");
    scanf("%d", &index);

    if(index == 0){
        printf("The digit of the %d-th index in Fibonacci sequence is 0", index);
    } 
    if(index == 1){
        printf("The digit of the %d-th index in Fibonacci sequence is 1", index);
    }

    for(int i = 2; i <= index; i++){
        fib = num1 + num2;
        num1 = num2;
        num2 = fib;
    }

    printf("The digit of the %d-th index in Fibonacci sequence is %d\n", index, fib);

    return 0;

}


    


