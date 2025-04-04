#include <stdio.h>

void print_num(int num);

int main(){

    print_num(5);
    return 0;
}


void print_num(int num){

    if(num < 0){
        return;
    }

    printf("%d ", num);
    print_num(num - 1); //or --num

}
    
