#include <stdio.h>

int addition(int num){
    
    int sum = 0;

    while(num > 0){
        sum = sum + (num % 10);
        num = num / 10;
       
    }

    return sum;
}

    int main(){

        int n = 0;
        printf("Enter a number: ");
        scanf("%d", &n);
        int result = addition(n);

        printf("%d\n", result);

        return 0;
    }


    

