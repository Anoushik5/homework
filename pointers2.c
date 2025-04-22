#include <stdio.h>

int main(){

    int arr[5] = {1, 2, 3, 4, 5};

    int* p0 = arr;

    printf("%p\n", arr);

    for(int i = 0; i < 5; i++){
        printf("%d\n", *(p0 + i));
    }
    return 0;

    }
