#include <stdio.h>

int main(){

    int arr[5];
    int index = 0;
    int sum = 0;
    int mul = 1;

    while(index < 5){
        scanf("%d", &arr[index]);
        index++;
    }

    for(int i = 0; i < 5; ++i){

            sum += arr[i];
            mul *= arr[i];

            continue;
        }
    

     printf("The sum is %d\n", sum);
     printf("The mul is %d\n", mul);

     return 0;

    }
