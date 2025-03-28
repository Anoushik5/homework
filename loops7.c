#include <stdio.h>

int main(){

    int num = 0;

    printf("Enter a number (1-9): ");
    scanf("%d", &num);

    for( int i = 1; i <= 10; ++i){
    
        printf("%d\n", num * i);
    
    }

    return 0;
}
