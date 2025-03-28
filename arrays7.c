#include <stdio.h>

int main(){
    
    int n = 0;
    int index = 0;
    
    printf("Enter the number of elements of an array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter values of elements in array: ");
    while(index < n){
        scanf("%d", &arr[index]);
        ++index;
    }

 
    for(int i = 0; i < n; i++){
        float element = (float)arr[i] / n;
        printf("%f\n", element);
    }

    return 0;
}


   
