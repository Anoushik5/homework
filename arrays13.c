#include <stdio.h>

int main(){

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int counter = 0;

    for(int i = 0; i < 10; ++i){
        if(arr[i] % 2 != 0){
            ++counter;
        }
    }
       

    printf("The count of odd numbers is %d\n", counter);
    
    
    return 0;

    }
