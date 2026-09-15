#include <stdio.h>

/* Função main: ponto de entrada */
int main() {
    /* Variáveis */
    float n1,n2,n3,n4,ma;
    char continuar = 's';

    while (continuar == 's') {
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
        scanf("\n%c", &continuar);
    }
    return 0;
}
    
