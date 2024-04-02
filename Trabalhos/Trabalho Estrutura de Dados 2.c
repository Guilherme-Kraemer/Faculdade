#include <stdio.h>

int main() {
    int matriz[6][3];
    int i, j;
    int maior, menor;
    int linha_maior, coluna_maior, linha_menor, coluna_menor;

    // Carregando a matriz
    printf("Digite os elementos da matriz 6x3:\n");
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializando o maior e o menor com o primeiro elemento da matriz
    maior = menor = matriz[0][0];
    linha_maior = linha_menor = coluna_maior = coluna_menor = 0;

    // Encontrando o maior e o menor elemento da matriz
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 3; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
            if(matriz[i][j] < menor) {
                menor = matriz[i][j];
                linha_menor = i;
                coluna_menor = j;
            }
        }
    }

    // Exibindo os resultados
    printf("\nMaior elemento da matriz: %d\n", maior);
    printf("Posicao (linha, coluna): (%d, %d)\n", linha_maior, coluna_maior);
    printf("\nMenor elemento da matriz: %d\n", menor);
    printf("Posicao (linha, coluna): (%d, %d)\n", linha_menor, coluna_menor);

    return 0;
}