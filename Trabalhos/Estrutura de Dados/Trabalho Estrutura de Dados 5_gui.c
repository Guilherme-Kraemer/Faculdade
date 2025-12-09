# include <stdio.h>

int matriz [4][5];
int resultado [5];
int i, j;

int main()
{
    for (i=0;i<4;i++){
        printf("Escreva o numeros da coluna %d \n", *&i);
        for (j=0;j<5;j++){
            scanf("%d", &matriz[i][j]);

        resultado [j] = matriz [i][j]+resultado[j];
        }
        
    }

    printf("O resultados das somas das colunas sao:\n");
    for (i=0;i<5;i++){
        printf("%d  ", *&resultado[i]);

    }

}