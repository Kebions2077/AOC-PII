#include <stdio.h>

#define N 1000
int matrix[N][N];

int main() {
    int i, j, sum1 = 0;
    
    // Inicializando a matriz com alguns valores (opcional)
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrix[i][j] = i + j;  // Exemplo de inicialização
        }
    }
    
    // Calculando a soma dos elementos
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            sum1 += matrix[i][j];
        }
    }
    
    printf("Soma dos elementos da matriz: %d\n", sum1);
    
    return 0;
}