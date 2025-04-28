#include <stdio.h>

//strstr() for locating a substring (also called a "needle") within a larger string (also called a "haystack")

int my_strlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

char* my_strstr(const char *where, const char *what) {
    int len_where = my_strlen(where);
    int len_what = my_strlen(what);

    if (len_what == 0) {
        return (char*)where; 
    }

    for (int i = 0; i <= len_where - len_what; i++) {
        int j = 0;
        while (j < len_what && where[i + j] == what[j]) {
            j++;
        }
        if (j == len_what) {
            return (char*)&where[i]; 
        }
    }

    return NULL; 
}

int main() {
    char text[200];
    char word[100];

    printf("Your text: ");
    fgets(text, sizeof(text), stdin);

    printf("The text to be searched: ");
    fgets(word, sizeof(word), stdin);

    for (int i = 0; text[i]; i++) {
        if (text[i] == '\n') text[i] = '\0';
    }
    for (int i = 0; word[i]; i++) {
        if (word[i] == '\n') word[i] = '\0';
    }

    char *result = my_strstr(text, word);

    if (result != NULL) {
        printf("%s\n", result);
    } else {
        printf("Not found։\n");
    }

    return 0;
}

