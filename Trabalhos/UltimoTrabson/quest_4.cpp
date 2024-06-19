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
    int stack[MAX], evenStack[MAX], oddStack[MAX];  // Declara��o das pilhas
    int top = -1, evenTop = -1, oddTop = -1;  // Inicializa��o dos topos das pilhas
    int value;

    // Ler valores at� que 999 seja digitado
    printf("Digite valores inteiros positivos (999 para parar):\n");
    while (1) {
        scanf("%d", &value);
        if (value == 999) {  // Verifica se o valor digitado � 999
            break;  // Sai do loop se o valor for 999
        }
        if (value > 0) {  // Verifica se o valor � positivo
            push(stack, &top, value);  // Empilha o valor na pilha original
        } else {
            printf("Por favor, digite apenas valores inteiros positivos.\n");  // Mensagem de erro para valores negativos
        }
    }

    // Distribuir valores da pilha original para pilhas pares e �mpares
    while (!isEmpty(top)) {  // Enquanto a pilha original n�o estiver vazia
        value = pop(stack, &top);  // Desempilha um valor da pilha original
        if (value % 2 == 0) {  // Verifica se o valor � par
            push(evenStack, &evenTop, value);  // Empilha o valor na pilha de pares
        } else {
            push(oddStack, &oddTop, value);  // Empilha o valor na pilha de �mpares
        }
    }

    // Imprimir as pilhas resultantes
    printf("Pilha de valores pares:\n");
    printStack(evenStack, evenTop);  // Imprime a pilha de valores pares

    printf("Pilha de valores �mpares:\n");
    printStack(oddStack, oddTop);  // Imprime a pilha de valores �mpares

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}

