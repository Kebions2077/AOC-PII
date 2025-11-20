#include <stdio.h>
#include <time.h>

#define N 10000

int matrix[N][N];

int main() {
    int i, j, sum1 = 0;
    clock_t start, end;
    double cpu_time_used;
    
    printf("Inicializando a matriz %dx%d...\n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrix[i][j] = 1;
        }
    }
    
    printf("Calculando a soma...\n");
    
    
    start = clock();
    

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            sum1 += matrix[j][i];
        }
    }
    
 
    end = clock();
    
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("Soma: %d\n", sum1);
    printf("Tempo de execução: %.6f segundos\n", cpu_time_used);
    printf("Tempo de execução: %.2f ms\n", cpu_time_used * 1000);
    
    return 0;
}
