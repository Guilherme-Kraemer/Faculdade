#include <stdio.h>

// Defini��o das constantes
#define TAMANHO_MAXIMO 100  // Define o tamanho m�ximo da fila

// Fun��o para enfileirar um valor
void enfileirar(int fila[], int *fim, int valor) {
    if (*fim < TAMANHO_MAXIMO - 1) {  // Verifica se a fila n�o est� cheia
        fila[++(*fim)] = valor;  // Incrementa a posi��o de fim da fila e adiciona o valor
    } else {
        printf("Fila cheia.\n");  // Mensagem de erro se a fila estiver cheia
    }
}

// Fun��o para desenfileirar um valor
int desenfileirar(int fila[], int *inicio, int *fim) {
    if (*inicio <= *fim) {  // Verifica se a fila n�o est� vazia
        return fila[(*inicio)++];  // Retorna o valor do in�cio da fila e incrementa a posi��o de in�cio
    } else {
        printf("Fila vazia.\n");  // Mensagem de erro se a fila estiver vazia
        return -1;  // Retorna -1 para indicar erro
    }
}

// Fun��o para verificar se a fila est� vazia
int estaVazia(int inicio, int fim) {
    return inicio > fim;  // Retorna 1 (verdadeiro) se a fila estiver vazia
}

// Fun��o para inverter a fila usando uma pilha auxiliar
void inverterFila(int fila[], int *inicio, int *fim) {
    int pilhaAuxiliar[TAMANHO_MAXIMO];  // Declara��o da pilha auxiliar
    int topo = -1;  // Inicializa��o do topo da pilha

    // Transferir elementos da fila para a pilha
    while (!estaVazia(*inicio, *fim)) {
        int valor = desenfileirar(fila, inicio, fim);  // Desenfileira um valor da fila
        pilhaAuxiliar[++topo] = valor;  // Empilha o valor
    }

    // Transferir elementos da pilha de volta para a fila
    while (topo >= 0) {
        int valor = pilhaAuxiliar[topo--];  // Desempilha um valor da pilha
        enfileirar(fila, fim, valor);  // Enfileira o valor de volta na fila
    }

    *inicio = 0;  // Reinicializa o �ndice de in�cio da fila
}

// Fun��o para imprimir a fila
void imprimirFila(int fila[], int inicio, int fim) {
    for (int i = inicio; i <= fim; i++) {  // Percorre a fila do in�cio ao fim
        printf("%d ", fila[i]);  // Imprime cada valor da fila
    }
    printf("\n");  // Quebra de linha ap�s imprimir a fila
}

int main() {
    int fila[TAMANHO_MAXIMO];  // Declara��o da fila
    int inicio = 0, fim = -1;  // Inicializa��o dos �ndices de in�cio e fim da fila
    int valor;

    // Ler valores para a fila
    printf("Digite valores inteiros positivos (digite um valor negativo para parar):\n");
    while (1) {
        scanf("%d", &valor);
        if (valor < 0) {  // Verifica se o valor � negativo para parar a entrada de dados
            break;  // Sai do loop se o valor for negativo
        }
        enfileirar(fila, &fim, valor);  // Enfileira o valor na fila
    }

    // Imprimir a fila original
    printf("Fila original:\n");
    imprimirFila(fila, inicio, fim);  // Imprime a fila original

    // Inverter a fila
    inverterFila(fila, &inicio, &fim);  // Chama a fun��o para inverter a fila

    // Imprimir a fila invertida
    printf("Fila invertida:\n");
    imprimirFila(fila, inicio, fim);  // Imprime a fila invertida

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}

