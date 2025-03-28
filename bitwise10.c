#include <stdio.h>

int main(){

    int num = 0;
    int index = 0;
   
    printf("Enter a number: ");
    scanf("%d", &num);
  
    printf("Enter a number (the index of the bit you want to change): ");
    scanf("%d", &index);
  
    num = (1 << index) ^ num;
  
    printf("%d\n", num);
  
      return 0;
  }

