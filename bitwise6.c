#include <stdio.h>

int main(){

    char a;
    char changed;

    printf("Enter a letter: ");
    scanf("%c", &a);

    changed = a ^ (1 << 5);  // uppercase and lowercase letters differ in the 5th bit(the reason why I did shift 1<<5)

    printf("The case-changed version of %c is %c.", a, changed);
    

     return 0;

    }


