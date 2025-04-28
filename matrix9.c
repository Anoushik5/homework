#include <stdio.h>

void swap(int matrix[100][100], int size) {
    for (int i = 0; i < size; i++) {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][size - 1 - i];
        matrix[i][size - 1 - i] = temp;
    }
}

int main() {
    int n;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[100][100];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int main_sum = 0, secondary_sum = 0;

    for (int i = 0; i < n; i++) {
        main_sum += matrix[i][i];
        secondary_sum += matrix[i][n - 1 - i];
    }

    printf("Sum of the main diagonal: %d\n", main_sum);
    printf("Sum of the secondary diagonal: %d\n", secondary_sum);

    swap(matrix, n);

    printf("Matrix after swapping diagonals:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}

