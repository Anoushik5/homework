#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a lowercase letter: ");
    scanf("%c", &ch);

    switch(ch) {
        case 'a': 
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        
            printf("%c is a vowel\n", ch);
            break;

       default:

            printf("%c is not a vowel\n", ch);
    }

    return 0;
}

