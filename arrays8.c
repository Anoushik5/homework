#include <stdio.h>

int main(){

    int arr1[10];
    int arr2[10];
    int index1 = 0;
    int index2 = 0;



    printf("Enter the values of the first set of elements: ");

    while(index1 < 10){
        scanf("%d", &arr1[index1]);
        ++index1;
    }

    printf("Enter the values of the second set of elements: ");

    while(index2 < 10){
        scanf("%d", &arr2[index2]);
        ++index2;
    }
    for(int i = 0; i < 10; ++i){
            int mul = arr1[i] * arr2[i];
            printf("The mul of the elements at index %d is %d\n", i, mul);
        }
    

    return 0;
}
