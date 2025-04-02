#include <stdio.h>

int main(){
    int num = 0;
    int reversed = 0;
    int bitcount = 32;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 0; i < bitcount; i++){
        reversed = (reversed << 1) | (num & 1);
        num >>= 1;
    }

    

    printf("%d\n", reversed);

    return 0;
    }
