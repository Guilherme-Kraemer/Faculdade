#include <stdio.h>

#define MAX 100  // Define o tamanho máximo da pilha

// Função para empilhar um valor
void push(int stack[], int *top, int value) {
    if (*top < MAX - 1) {  // Verifica se a pilha não está cheia
        stack[++(*top)] = value;  // Incrementa o topo e adiciona o valor
    } else {
        printf("Pilha cheia.\n");  // Mensagem de erro se a pilha estiver cheia
    }
}

// Função para desempilhar um valor
int pop(int stack[], int *top) {
    if (*top >= 0) {  // Verifica se a pilha não está vazia
        return stack[(*top)--];  // Retorna o valor do topo e decrementa o topo
    } else {
        printf("Pilha vazia.\n");  // Mensagem de erro se a pilha estiver vazia
        return -1;  // Retorna -1 para indicar erro
    }
}

// Função para verificar se a pilha está vazia
int isEmpty(int top) {
    return top == -1;  // Retorna 1 (verdadeiro) se a pilha estiver vazia
}

// Função para imprimir a pilha
void printStack(int stack[], int top) {
    for (int i = top; i >= 0; i--) {  // Percorre a pilha do topo até a base
        printf("%d ", stack[i]);  // Imprime cada valor da pilha
    }
    printf("\n");  // Quebra de linha após imprimir a pilha
}

int main() {
    int stack[MAX];  // Declaração da pilha
    int tempStack[MAX];  // Pilha temporária para armazenar os valores que não são múltiplos de 3
    int top = -1;  // Inicialização do topo da pilha original
    int tempTop = -1;  // Inicialização do topo da pilha temporária
    int value;

    // Ler valores até que o usuário decida parar
    printf("Digite valores inteiros positivos (digite um número negativo para parar):\n");
    while (1) {
        scanf("%d", &value);
        if (value < 0) {  // Verifica se o valor é negativo para parar a entrada de dados
            break;  // Sai do loop se o valor for negativo
        }
        if (value > 0) {  // Verifica se o valor é positivo
            push(stack, &top, value);  // Empilha o valor na pilha original
        } else {
            printf("Por favor, digite apenas valores inteiros positivos.\n");  // Mensagem de erro para valores não positivos
        }
    }

    // Remover múltiplos de 3 da pilha original
    while (!isEmpty(top)) {  // Enquanto a pilha original não estiver vazia
        value = pop(stack, &top);  // Desempilha um valor da pilha original
        if (value % 3 != 0) {  // Verifica se o valor não é múltiplo de 3
            push(tempStack, &tempTop, value);  // Empilha o valor na pilha temporária se não for múltiplo de 3
        }
    }

    // Transferir valores da pilha temporária de volta para a pilha original
    while (!isEmpty(tempTop)) {  // Enquanto a pilha temporária não estiver vazia
        push(stack, &top, pop(tempStack, &tempTop));  // Desempilha da temporária e empilha de volta na original
    }

    // Imprimir a pilha resultante
    printf("Pilha após remover múltiplos de 3:\n");
    printStack(stack, top);  // Imprime a pilha original (agora sem múltiplos de 3)

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}

