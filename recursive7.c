#include <stdio.h>

long long fib(int n);

int main(){

    int n = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("The fibonacci of %d is %lld\n", n, fib(n));

    return 0;

    }

    long long fib(int n){

       /* if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }*/

        if(n < 2){
            return n;
        }

        return (fib(n - 1) + fib(n - 2));
    }

       
