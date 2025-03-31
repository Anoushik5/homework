#include <stdio.h>

int table(int a){
    for(int i = 1; i <= 10; ++i){
        printf("%d * %d = %d\n", a, i , a * i);

           
        }
    

    return 0;
}

int main(){

    for(int a = 1; a <= 10; ++a){
    table(a);
    }

    return 0;
}

