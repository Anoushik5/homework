#include <stdio.h>

int maximum(int arr[], int arrsize, int index);

int main(){

    const int size = 5;
    int arr[size];
    int index = 0;

    while(index < size){
        scanf("%d", &arr[index]);
        ++index;
    }

    int result = maximum(arr, size, 0);

    printf("The maximum value is %d\n", result);

    return 0;

    }

int maximum(int arr[], int arrsize, int index){

    int max = arr[0];
    
    if(index == arrsize){
        return arr[0];
    }

    int maxnum = maximum(arr, arrsize, index + 1);

    if(maxnum < arr[index]){
        return arr[index];
    }

    return maxnum;

}
    
