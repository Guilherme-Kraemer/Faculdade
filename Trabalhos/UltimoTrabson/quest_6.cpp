#include <stdio.h>

#define MAX 100  // Define o tamanho m�ximo da pilha

// Fun��o para empilhar um valor
void push(int stack[], int *top, int value) {
    if (*top < MAX - 1) {  // Verifica se a pilha n�o est� cheia
        stack[++(*top)] = value;  // Incrementa o topo e adiciona o valor
    } else {
        printf("Pilha cheia.\n");  // Mensagem de erro se a pilha estiver cheia
    }
}

// Fun��o para desempilhar um valor
int pop(int stack[], int *top) {
    if (*top >= 0) {  // Verifica se a pilha n�o est� vazia
        return stack[(*top)--];  // Retorna o valor do topo e decrementa o topo
    } else {
        printf("Pilha vazia.\n");  // Mensagem de erro se a pilha estiver vazia
        return -1;  // Retorna -1 para indicar erro
    }
}

// Fun��o para verificar se a pilha est� vazia
int isEmpty(int top) {
    return top == -1;  // Retorna 1 (verdadeiro) se a pilha estiver vazia
}

// Fun��o para imprimir a pilha
void printStack(int stack[], int top) {
    for (int i = top; i >= 0; i--) {  // Percorre a pilha do topo at� a base
        printf("%d ", stack[i]);  // Imprime cada valor da pilha
    }
    printf("\n");  // Quebra de linha ap�s imprimir a pilha
}

int main() {
    int stack[MAX];  // Declara��o da pilha
    int tempStack[MAX];  // Pilha tempor�ria para armazenar os valores que n�o s�o m�ltiplos de 3
    int top = -1;  // Inicializa��o do topo da pilha original
    int tempTop = -1;  // Inicializa��o do topo da pilha tempor�ria
    int value;

    // Ler valores at� que o usu�rio decida parar
    printf("Digite valores inteiros positivos (digite um n�mero negativo para parar):\n");
    while (1) {
        scanf("%d", &value);
        if (value < 0) {  // Verifica se o valor � negativo para parar a entrada de dados
            break;  // Sai do loop se o valor for negativo
        }
        if (value > 0) {  // Verifica se o valor � positivo
            push(stack, &top, value);  // Empilha o valor na pilha original
        } else {
            printf("Por favor, digite apenas valores inteiros positivos.\n");  // Mensagem de erro para valores n�o positivos
        }
    }

    // Remover m�ltiplos de 3 da pilha original
    while (!isEmpty(top)) {  // Enquanto a pilha original n�o estiver vazia
        value = pop(stack, &top);  // Desempilha um valor da pilha original
        if (value % 3 != 0) {  // Verifica se o valor n�o � m�ltiplo de 3
            push(tempStack, &tempTop, value);  // Empilha o valor na pilha tempor�ria se n�o for m�ltiplo de 3
        }
    }

    // Transferir valores da pilha tempor�ria de volta para a pilha original
    while (!isEmpty(tempTop)) {  // Enquanto a pilha tempor�ria n�o estiver vazia
        push(stack, &top, pop(tempStack, &tempTop));  // Desempilha da tempor�ria e empilha de volta na original
    }

    // Imprimir a pilha resultante
    printf("Pilha ap�s remover m�ltiplos de 3:\n");
    printStack(stack, top);  // Imprime a pilha original (agora sem m�ltiplos de 3)

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}

