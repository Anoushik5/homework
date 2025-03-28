#include <stdio.h>

int main(){

    int num = 0;
    unsigned long long fact = 1;
    scanf("%d", &num);

    if(num < 0){
        printf("Fact doesn't exist");
    } else {
        for(int i = 1; i <= num; i++){
            fact = fact * i;
        }

        printf("%d's factorial is %llu\n", num, fact);
    }
    
    return 0;

}

