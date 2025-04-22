#include <stdio.h>

int main(){

    int arr[2][3]={};
    int row = 2;
    int col = 3;
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            scanf("%d", &arr[i][j]); 
        }       
    }

    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            printf("%d", arr[i][j]);
        }
    }
    return 0;
}
