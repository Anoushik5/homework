#include <stdio.h>

int main(){

    int num = 0;
    int i = 0;
    int j = 0;


    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the indexes of the bits you want to swap: ");
    scanf("%d %d", &i, &j);

    if((num >> i) & 1 != ((num >> j) & 1)) {
        num = num ^ (1 << i);
        num = num ^ (1 << j);
    }
    

    printf("The number with swapped bits is %d\n", num);

    return 0;

}
