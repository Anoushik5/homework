#include <stdio.h>

int divisor(int n1, int n2);

int main(){

    int num1 = 0;
    int num2 = 0;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int result = divisor(num1, num2);
    printf("The biggest divisor of the two numbers is %d", result);

    return 0;
    }

int divisor(int n1, int n2){

    if(n2 == 0){
        return n1;
    }

    return divisor(n2, n1 % n2);  
}

/*the same as
temporary = n2;
n2 = n1 % n2;
n1 = temp;
*/
