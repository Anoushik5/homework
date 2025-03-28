#include <stdio.h>

int main(){

    int num = 0;
    int num1 = 0;
    int num2 = 0;
    

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0){
        num1 = num % 10;         //Getting the last digit
        num2 = num2 * 10 + num1; //Making a place for the last digit and adding it
        num = (num / 10);        //Getting the whole part
        }

    printf("%d", num2);

    return 0;
}
