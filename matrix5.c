#include <stdio.h>

int main(){
   
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int sum = 0;

    for(int i = 0; i < 3; ++i){
        for(int j = i; j < 3; ++j){
            sum = sum + arr[i][j];
        }
    }

    printf("%d\n", sum);
    return 0;

   }
