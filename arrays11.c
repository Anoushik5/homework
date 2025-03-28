#include <stdio.h>

int main(){

    int arr[10];
    int tmp = 0;

    for(int i = 0; i < 10; ++i){
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you are looking for: ");
    
    int number = 0;

    scanf("%d", &number);

    for(int i = 0; i < 10; ++i){
        if(arr[i] == number){
            printf("Yes");
            return 0;  // the 17th problem could be solved this way if we didn't need to admit the target (ete inch Tamaran a ancac dasin asel es dzevy) 

        }

        }

    printf("No\n");

    return 0;


    }
