#include <stdio.h>

int main(){

    int num = 0;
    int reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int real = num;
    int bit = 0;

    while(num > 0){
        bit = num % 10; //getting the last bit (last digit)
        reverse = reverse * 10 + bit; //getting the number reversed
        num /= 10; //taking off the last bit (last digit)
    }
        if(reverse == real){
            printf("Your number is a palindrome.\n");
        } else {
            printf("Your number is not a palindrome.\n");
        }

        return 0;
    
}
