/* Um caixa eletrônico realiza saques com notas de 100 reais, 50 reais, 20 reais, 10 reais e 5 reais. 
 * Programa em que, dado o valor do saque, imprima na tela a quantidade de notas necessárias para se 
   realizar o saque. Considere que o saque deve ser realizado com a menor quantidade de notas possível e que o caixa possui:

    - 8 notas de 100 reais
    - 12 notas de 50 reais
    - 9 notas de 20 reais
    - 11 notas de 10 reais
    - 20 notas de 5 reais

Caso a quantidade de notas não seja suficiente para o valor do saque, imprime-se a seguinte mensagem: 
“O saque não pode ser efetuado”. 
Na  saída do programa também deve ser informado a quantidade remanescentes de notas no caixa eletrônico.   */

#include <stdio.h>

int main() {
    /* Total de notas */
    int total_notas_100 = 8;
    int total_notas_50 = 12;
    int total_notas_20 = 9;
    int total_notas_10 = 11;
    int total_notas_5 = 20;

    /* Número de notas */
    int n100;
    int n50;
    int n20;
    int n10;
    int n5;

    int total_maximo;
    int saque;;

    // Calcula máximo valor do saque
    total_maximo = (total_notas_100 * 100) + (total_notas_50 * 50) + 
                       (total_notas_20 * 20) + (total_notas_10 * 10) + 
                       (total_notas_5 * 5);
                       
    printf("Saque maximo: %d\n", total_maximo);


    printf("Informe valor do saque: ");
    scanf("%d", &saque);

    if (saque > total_maximo) {
        printf("Saque nao pode ser efetuado!\n");
    } else {
        // Devemos comecar o saque pelas notas mais altas para minimizar o numero de notas.
        
        // Notas de 100
        n100 = saque / 100;   // Em C, a divisao entre inteiros ja descarta as casas decimais
        if (n100 > total_notas_100) {
            n100 = total_notas_100;
        }
        saque = saque - n100 * 100;

        // Notas de 50
        n50 = saque / 50;
        if (n50 > total_notas_50) {
            n50 = total_notas_50;
        }
        saque = saque - n50 * 50;

        // Notas de 20
        n20 = saque / 20;
        if (n20 > total_notas_20) {
            n20 = total_notas_20;
        }
        saque = saque - n20 * 20;

        // Notas de 10
        n10 = saque / 10;
        if (n10 > total_notas_10) {
            n10 = total_notas_10;
        }
        saque = saque - n10 * 10;

        // Notas de 5
        n5 = saque / 5;
        if (n5 > total_notas_5) {
            n5 = total_notas_5;
        }
        saque = saque - n5 * 5;

        // Imprime os resultados
        printf("Notas de 100: %d\n", n100);
        printf("Notas de 50: %d\n", n50);
        printf("Notas de 20: %d\n", n20);
        printf("Notas de 10: %d\n", n10);
        printf("Notas de 5: %d\n", n5);
    }

    return 0;
}