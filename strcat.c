#include <stdio.h>

//strcat() for combining(concatenate) two strings

int my_strlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

char* my_strcat(char *dest, const char *src) {
    int dest_len = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0') {
        dest[dest_len + i] = src[i]; 
        i++;
    }

    dest[dest_len + i] = '\0'; //adding the ending 

    return dest;
}

int main() {
    char dest[200] = "Hello "; 
    char src[100];

    printf("The second string: ");
    fgets(src, sizeof(src), stdin);

    int i = 0;
    while (src[i] != '\0') {  //removing the newline if there is one
        if (src[i] == '\n') {
            src[i] = '\0';
            break;
        }
        i++;
    }

    my_strcat(dest, src);

    printf("The result: %s\n", dest);

    return 0;
}

