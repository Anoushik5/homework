#include <stdio.h>
#define SIZE 3

int main() {
    int arr[SIZE][SIZE] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < SIZE; i++) {
        int temp = arr[i][i];
        arr[i][i] = arr[i][SIZE - 1 - i];
        arr[i][SIZE - 1 - i] = temp;
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

