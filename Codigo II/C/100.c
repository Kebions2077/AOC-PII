#include <stdio.h>
#include <time.h>

#define N 100

int matrix[N][N];

int main() {
    int i, j, sum1 = 0;
    clock_t start, end;
    double elapsed;

    /* Inicializa a matriz (opcional, apenas para evitar lixo) */
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrix[i][j] = 1;
        }
    }

    /* Marca o início */
    start = clock();

    /* Soma todos os elementos da matriz */
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            sum1 += matrix[i][j];
        }
    }

    /* Marca o fim */
    end = clock();

    /* Tempo em segundos */
    elapsed = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Soma = %d\n", sum1);
    printf("Tempo de execução: %f segundos\n", elapsed);

    return 0;
}
