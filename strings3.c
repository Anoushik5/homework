#include <stdio.h>

int main(){

    char str[100];

    for(int i = 0; i < 99; ++i){
        scanf("%c", &str[i]);
        if(str[i] == '\n'){ //got this from gpt, didn't know how to fix(
            str[i] = '\0';
            break;
        }
        
    }
    

    for(int i = 0; str[i] != '\0'; ++i){
        if(str[i] >= '0' && str[i] <= '9'){
            printf("%c\n", str[i]);
        }
    }

    return 0;
}

