#include <stdio.h>

/* Função main: ponto de entrada */
int main() {
    /* Variáveis */
    float n1,n2,n3,n4,ma;
    char continuar = 's';

    do {
        /* Entrada de dados */
        printf("Digite as notas: ");
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

        /* Processamento */
        ma = (n1 + n2 + n3 + n4)/4;

        if (ma < 6) {
        	printf("Em recuperação.\n");
        }
        else {
        	printf("Aprovado.\n");
        }
        printf("Deseja continuar? \n");
        scanf("%c", &continuar);

    } while (continuar == 's');

    return 0;
}
    
