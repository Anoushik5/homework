#include <stdio.h>

int main(){

    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int row = 3;
    int col = 3;
    int size = 3;


    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            if(i % 2 == 0){
                arr[i][j] = 0;
             }
        }
    }
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            printf("%d", arr[i][j]);
        }
    }
    return 0;
 }
