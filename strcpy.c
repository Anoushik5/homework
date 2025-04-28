#include <stdio.h>

//strcpy() for copying one string to another

char* my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // adding the ending 
    return dest;
}

int main() {
    char source[100];
    char destination[100]; 

    printf("Your text: ");
    fgets(source, sizeof(source), stdin);
    
    //removing the newline if there is one
    int i = 0;
    while (source[i] != '\0') {
        if (source[i] == '\n') {
            source[i] = '\0';
            break;
        }
        i++;
    }

    my_strcpy(destination, source);

    printf("%s\n", destination);

    return 0;
}

