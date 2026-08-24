/* Programa para determinar se um número é par ou impar. 
 * Dica: _Um número é impar quando a divisão por 2 não for exata_. */

#include <stdio.h>

int main(){


    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d",&numero);

    if (numero % 2 == 0)          // % 2 significa o resto da divisão por 2
        printf("Numero par.\n");
    else
        printf("Numero ímpar.\n");


    return 0;
}