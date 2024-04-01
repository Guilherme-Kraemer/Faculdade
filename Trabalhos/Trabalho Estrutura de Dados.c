#include <stdio.h>

int main()
{
    int x = 0;
    int ent1 [12];
    int ent2 [12];
    int op [12];
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
    { printf("%d \n", ent1[x]);
    }

    printf ("escreva as 12 operacoes que deseja fazer: \n");
    for (x=0;x<12;x++)
    {
        scanf("%c", &operacao);

        switch (operacao)
        {
        case operacao = "+"
            res[x] = ent1[x]+ent2[x];
            break;
        case: operacao = "-";
            res[x] = ent1[x]-ent2[x];
            break;
        case: operacao = "*":
            res[x] = ent1[x]*ent2[x];
            break;
        case: operacao = "/":
            res[x] = ent1[x]/ent2[x];
            break;
        default:
            break;
        }
    };


    
    printf("Hello World");
}