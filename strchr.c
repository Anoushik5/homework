#include <stdio.h>

//strchr() for locating the first occurrence of a character

char* my_strchr(const char *str, char ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return (char*)str;
        }
        str++;
    }

    //checking the last symbol,in case it is '\0'
    if (ch == '\0') {
        return (char*)str;
    }

    return NULL; 
}

int main() {
    char text[100];
    char symbol;

    printf("Your text: ");
    fgets(text, sizeof(text), stdin);

    int i = 0;
    while (text[i] != '\0') { //removing the '\n'
        if (text[i] == '\n') {
            text[i] = '\0';
            break;
        }
        i++;
    }

    printf("The symbol: ");
    scanf(" %c", &symbol); 

    char *result = my_strchr(text, symbol);

    if (result != NULL) {
        printf("The symbol is found: %s\n", result);
    } else {
        printf("Not found։\n");
    }

    return 0;
}

