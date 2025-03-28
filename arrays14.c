#include <stdio.h>

int main(){

    char str[10];
    scanf("%s", str);
    int size = 10;

    for(int i = 0; i < size / 2; ++i){
        char tmp = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = tmp;
    }

    for(int i = 0; i < 10; ++i){
        printf("%c", str[i]);
    }


return 0;

    }
