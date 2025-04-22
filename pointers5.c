#include <stdio.h>

int main(){

    int a = 15;
    int b = 5;

    int* pa = &a;
    int* pb = &b;
    

    printf("a + b = %d\n", *pa + *pb);
    printf("a * b = %d\n", *pa * *pb);
    printf("a - b = %d\n", *pa - *pb);
    printf("a / b = %d\n", *pa / *pb);

    return 0;
    }
