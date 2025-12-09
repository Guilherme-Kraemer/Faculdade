#include <stdio.h>

int matriz [3][4];
int soma_total = 0, soma = 0;
int i=0, j=0;
double  media = 0;

main(){
    printf("Escreva os numeros da matriz:\n");
    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf ("%d", &matriz[i][j]);
        }
    }
    printf ("Os numeros pares sao: \n");
    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            if (matriz[i][j]%2==0){
            printf ("%d ", matriz[i][j]);
            }
            else{
                soma = soma + matriz[i][j];
            }
            soma_total = soma_total+matriz[i][j];
        }
    }
    media = soma_total/12;
    printf("\nA soma total dos impares é: %d \n", *&soma);
    printf("\nA media e: %5.5lf", *&media);
}