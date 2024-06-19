#include <stdio.h>

void decimalParaHexadecimal(int decimal) {
    // Array para armazenar o número hexadecimal
    char hexadecimal[100];
    int i = 0;  // Índice para o array hexadecimal

    // Caso especial para o número zero
    if (decimal == 0) {
        printf("0\n");
        return;
    }

    // Enquanto o número decimal não for zero
    while (decimal != 0) {
        int resto = decimal % 16;  // Calcula o resto da divisão por 16

        // Convertendo o resto para um caractere hexadecimal
        if (resto < 10) {
            hexadecimal[i] = resto + '0';  // 0-9 são representados por '0'-'9'
        } else {
            hexadecimal[i] = resto - 10 + 'A';  // 10-15 são representados por 'A'-'F'
        }

        decimal = decimal / 16;  // Atualiza o valor decimal dividindo por 16
        i++;  // Incrementa o índice do array
    }

    // Imprimindo o resultado hexadecimal na ordem correta
    // O array está preenchido de trás para frente, então precisamos imprimir na ordem inversa
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");  // Nova linha após imprimir o número hexadecimal
}

int main() {
    int numeroDecimal;

    // Solicitando ao usuário que insira um número decimal
    printf("Digite um número decimal: ");
    scanf("%d", &numeroDecimal);

    // Chamando a função para converter e imprimir o número hexadecimal
    printf("O número hexadecimal é: ");
    decimalParaHexadecimal(numeroDecimal);

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
