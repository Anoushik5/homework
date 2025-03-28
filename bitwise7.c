#include <stdio.h>
   
   int main() {
   
       int num = 0;
       int n = 0;
   
      printf("Enter a number: ");
      scanf("%d", &num);
      printf("Enter an index: ");
      scanf("%d", &n);
  
    num = num | (1<<n);
    printf("the result is %d", num);

      return 0;
  }

