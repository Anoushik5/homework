#include <stdio.h>

char upper(char str[], int index);

int main(){

    const int size = 100; //ancac dasin asec vor const-ov aveli chisht a
    char str[size];

    printf("Enter a string: ");
    scanf("%s", str);

    char result = upper(str, 0);

    printf("The first uppercase letter is '%c'\n", result);
    
    return 0;

    
    }

char upper(char str[], int index){

    if(str[index] >= 'A' && str[index] <= 'Z'){
        return str[index];
    }

    return upper(str, index + 1);
}


