#include <stdio.h>

void change(int *a, int *b);

int main(){

    int x = 5;
    int y = 7;

    printf("Unchanged numbers: %d, %d\n", x, y);

    change(&x, &y);

    printf("Changed numbers: %d, %d\n", x, y);

    return 0;

    }

void change(int *a, int *b){

    *a = 8;
    *b = 13;

}
