#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num){
    if(num % 2 == 0 && num != 2){
        return false;
    }

    for(int i = 3; i * i <= num; i = i + 2){  /*If num has a divisor bigger than it's square root there surely is a smaller number as well.  i * i because if i * i > num, then i is bigger than the square root of num, so we can stop*/
        if(num % i == 0){
            return false;
        }
    }

    return true;

}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The number is prime: %d\n", is_prime(number));

    return 0;
}


