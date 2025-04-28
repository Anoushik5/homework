#include <stdio.h>

int main(){

    char str[100];

    for(int i = 0; i < 99; ++i){
        scanf("%c", &str[i]);
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }
    
    for(int i = 0; str[i] != '\0'; ++i){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    
    printf("%s", str);
    return 0;


    }
