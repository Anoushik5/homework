#include <stdio.h>
#include <string.h>

char lower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}

char upper(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - ('a' - 'A');
    }
    return ch;
}

void title(char *str) {
    if (str[0]) {
        str[0] = upper(str[0]); 
    }

    for (int i = 1; str[i]; i++) {
        str[i] = lower(str[i]); 
    }
}

int main() {
    char text[100];

    printf("Your text:  ");
    fgets(text, sizeof(text), stdin);

    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }

    title(text);

    printf("%s\n", text);

    return 0;
}

    
