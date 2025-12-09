#include <stdio.h>
#include <string.h>

#define MAX_CHAR 50

// Função para listar todas as cidades armazenadas na matriz
void listarCidades(char matriz[4][4][MAX_CHAR]) {
    printf("Lista de cidades:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%s\n", matriz[i][j]);
        }
    }
}

int main() {
    char matriz_cidades[4][4][MAX_CHAR];
    char buffer[MAX_CHAR]; // Buffer para armazenar a entrada do usuário

    // Preencher a matriz com entrada do usuário
    printf("Digite o nome das cidades:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            fgets(buffer, sizeof(buffer), stdin); // Lê a entrada completa, incluindo espaços
            buffer[strcspn(buffer, "\n")] = '\0'; // Remove o caractere de nova linha
            strcpy(matriz_cidades[i][j], buffer); // Copia a entrada para a matriz
        }
    }

    // Listar as cidades
    listarCidades(matriz_cidades);

    return 0;
}
