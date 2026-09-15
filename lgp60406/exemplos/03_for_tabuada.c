/* Bibliotecas */
#include <stdio.h>

/* Função main: ponto de entrada */
int main() {
    int tabuada,i,calculo;

    printf("Qual a tabuada? \n");
    scanf("%d", &tabuada);

    for (i=0; i < 11; i++){
        calculo = i * tabuada;
        printf("%d\n", calculo);
    }

    return 0;
}
