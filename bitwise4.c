#include <stdio.h>

int main(){

    int n = 0;
    int count = 0;

    printf("Enter a number  ");
    scanf("%d", &n);

    while(n > 0){
        if ((n & 1) == 1){
        count++;
    }
        n >>= 1;
    }
    
    if(count % 2 == 0){
        printf("The number 1s is even.");
    } else {
        printf("The number 1s is odd.");
    }

  

    return 0;
}

