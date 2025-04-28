#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[N][M];
    int min;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == 0 && j == 0) {
                min = matrix[i][j];
            } else if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matrix[i][j] == min) {
                printf("%d %d\n", i, j);
            }
        }
    }

    return 0;
}

