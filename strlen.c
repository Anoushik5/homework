#include <stdio.h>

//strlen() for calculating the length of a string

int my_strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char text[100];

    printf("Your text: ");
    fgets(text, sizeof(text), stdin);

    int len = my_strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
        len--; 
    }

    printf("%d\n", my_strlen(text));

    return 0;
}

