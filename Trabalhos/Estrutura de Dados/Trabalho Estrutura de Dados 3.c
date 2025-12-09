#include <stdio.h>

double matriz_principal [5][5];
double matriz_diagonal [5];
double maior;
int i,j;

int main()
{
    printf("Escreva os números da matriz principal:\n");
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            scanf("%20lf", &matriz_principal[i][j]);
            if (i==0 && j==0){
                maior=matriz_principal[i][j];
            }
            else if (matriz_principal[i][j]>maior)
            {
                maior=matriz_principal[i][j];
            }
        }
    }
    printf("Os numeros da matriz sao\n");
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            printf("%20lf |", *&matriz_principal[i][j]);
        }
    printf("\n");
    }
    printf ("O maior numero da matriz e: %20lf", maior);
    for (i=0;i<5;i++){
        matriz_diagonal[i] = matriz_principal[i][i]*maior;
    }
    printf("A matriz da multiplicacao é: \n");
    
    for (i=0;i<5;i++){
        printf ("%20lf", matriz_diagonal[i]);
    }
    return 0;
}