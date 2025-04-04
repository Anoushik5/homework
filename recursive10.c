#include <stdio.h>

int strlength(char str[], int index){
    

    if(str[index] == '\0'){
        return 0;
    }

    return 1 + strlength(str, index + 1);
}

int main(){

    char string[] = "Hello, World!";
    printf("The length of the string: %d\n", strlength(string, 0));

    return 0;

    }
