#include <stdio.h>

int main() {

    char my_string[] = "HelloWorld";

    int length = 0;

    while (my_string[length] != '\0') {
        length++;
    }

    printf("%d\n", length);

    return 0;
}

