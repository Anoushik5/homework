#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int count = 0;

    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; ++i){
        if (i % 5 == 0){
            count++;
        }
    }


        printf("The numbers that can be divided by 5 are:%d\n ", count );
        
    

    return 0;
}
