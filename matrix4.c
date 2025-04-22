#include <stdio.h>

int main(){

    int arr[3][3] = {{1, 2, 3},  {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;
    int sum = 0;

    for(int i = 0; i < row; ++i){
        sum = sum + arr[i][2-i];
    }

    printf("%d\n", sum);

    return 0;

    }
