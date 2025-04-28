#include <stdio.h>
#include <stdlib.h>

int main(){

    int N = 0;
    int M = 0;
    scanf("%d", &N);
    scanf("%d", &M);

    int* data = (int*) malloc(N * M * sizeof (int));
    int* maxvalue = (int*) malloc(N * sizeof(int));

    for(int i = 0; i < N * M; ++i){
        scanf("%d", &data[i]);
    }

    for(int i = 0; i < N; ++i) {
        int max = data[i * M];
        for (int j = 1; j < M; ++j) {
                int val = data[i * M * j];
                if(val > max){
                    val = max;
            }
        }
        maxvalue[i] = max;
    }

    for(int i = 0; i < N; ++i){
        printf("%d", maxvalue[i]);
    }

    free(data);
    free(maxvalue);

    return 0;

    }
