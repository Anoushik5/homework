#include <stdio.h>

void multiply(int n, int mul);

int main(){

    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    multiply(num, 1);

    return 0;
    }

void multiply(int n, int mul){
    

    if(n == 0){
        printf("%d\n", mul);

        return;
    }

    int tmp = n % 10;
    mul = mul * tmp;


    multiply(n / 10, mul);
   
}
  
