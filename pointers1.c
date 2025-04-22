#include <stdio.h>

int main(){

    int a = 4;
    float b = 3.14f;
    char ch = 'a';

    int* pa = &a;
    float* pb = &b;
    char* pch = &ch;

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &ch);

    return 0;

    }
