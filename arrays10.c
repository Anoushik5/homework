#include <stdio.h>

int main(){

    int arr[10];
    int index = 0;

    while(index < 10){
        scanf("%d", &arr[index]);
        ++index;
    }
    
    float sum = 0;

    for(int i = 0; i < 10; ++i){
        sum = sum + arr[i];
    }

    float mean = sum / 10; 

    printf("The arithmetic mean is %f\n", mean);

    return 0;
}
