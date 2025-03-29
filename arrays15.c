#include <stdio.h>

int main(){

    int arr[10];
    int size = 10;
    int begin = 0;
    int end = size - 1;

    for(int i = 0; i < size; ++i){
        scanf("%d", &arr[i]);
    }

    while(begin < end){
        if(arr[begin] % 2 == 0){
            ++begin;
        }

        else if(arr[end] % 2 != 0){
            --end;
        }
    }

    for(int i = 0; i < size; ++i){
        printf("%d", arr[i]);
    }

    return 0;


    }
