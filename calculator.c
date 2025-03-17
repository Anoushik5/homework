#include <stdio.h>

int main()
{
        int x = 0;
        int y = 0;
        char op;
        int supsc; //was trying to do the ^y one, couldn't make it, left this here as a reminder for trying again later, "superscript"
         
        printf("Enter the first number: ");
        scanf("%d", &x);
        printf("Enter the second number: ");
        scanf("%d", &y);

        printf("Enter an operation(+,-,*,/,^(for squared),v(for root):   ");
        scanf(" %c", &op);

        if (op == '+') {
                printf("Result = %d \n", x + y);
        } else if (op == '-') {
            printf("Result = %d \n", x - y);
        } else if (op == '*') {
            printf("Result = %d \n", x * y);
        } else if (op == '/') {
            if (y != 0) {
                printf("Result = %d \n", x / y);
            } else {
                printf("Division by zero is false \n");
            }    
        }

        if (op == '^') {
            printf("Result of ^2 for x = %d \n", x * x);
            printf("Result of ^2 for y = %d \n", y * y);
        }

        if (op == 'v') {
            printf("IDK how to count this");  // √x = x½, i do, but idk how to explain this to C language yet
        }    

        return 0;
}




