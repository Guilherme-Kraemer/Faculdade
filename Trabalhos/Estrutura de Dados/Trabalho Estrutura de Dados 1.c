#include <stdio.h>

int main()
{
    int x = 0;
    int ent1 [12];
    int ent2 [12];
    int res [12];
    char operacao;
    
    printf ("escreva os primeiros 12 numeros: \n");
    for (x=0;x<12;x++)
    {
        scanf("%d",&ent1[x]);
    };

    printf ("Os numeros da primeira matriz sao: \n");

    for (x=0;x<12;x++)
    { printf("%d \n", ent1[x]);
    }   

    printf ("escreva os proximos 12 numeros: \n");
    for (x=0;x<12;x++)
    {
        scanf("%d",&ent2[x]);
    };

    printf ("Os numeros da segunda matriz sao: \n");

    for (x=0;x<12;x++)
    {
    printf("Digite a operacao (+, -, *, /): ");
        scanf(" %c", &operacao); // Deixe um espaço antes de %c para ignorar possíveis espaços em branco

        // Realiza a operação de acordo com a entrada
        switch (operacao) {
            case '+':
                res[x] = ent1[x] + ent2[x];
                break;
            case '-':
                res[x] = ent1[x] - ent2[x];
                break;
            case '*':
                res[x] = ent1[x] * ent2[x];
                break;
            case '/':
                if (ent2[x] != 0) {
                    res[x] = ent1[x] / ent2[x];
                } else {
                    printf("Erro: Divisao por zero.\n");
                    res[x] = 0; // Ou outro valor padrão
                }
                break;
            default:
                printf("Operacao invalida.\n");
                res[x] = 0; // Ou outro valor padrão
                break;
        };
    };
    printf("Os resultados sao: \n");

    for (x=0;x<12;x++)
    {
        printf("%d \n", *&res[x]);
    };
}