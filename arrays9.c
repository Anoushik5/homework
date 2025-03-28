#include <stdio.h>

int main(){

    int arr[10];
    int index = 0;
    int size = 10;

    while(index < 10){
        scanf("%d", &arr[index]);
        ++index;
    }
    
/* or
for(int i = 0; i < 10; ++i)
{ scanf("%s", &arr[i]);}
*/

    for(int i = 0; i < size / 2; ++i){
        int tmp = arr[i];
        arr[i] = arr[size - 1 -i];
        arr[size - 1 - i] = tmp;
    }

/*
arr[0] <-> arr[9];
i = 0, 9 = size -1 - i
i = 1, 8 = size -1 - i
i = 2, 7 = size -1 - i
i = 6, 4 = size -1 - i
*/

    for(int i = 0; i < 10; ++i){
        printf("%d ", arr[i]);
    }

    return 0;
        
}
