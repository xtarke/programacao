#include <stdio.h>

/* Função main: ponto de entrada */
int main() {
    /* Variáveis */
    float n1,n2,n3,n4,ma;
    int contador = 0;

    while (contador < 5) {
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
        contador++; //contador = contador + 1;
    }
    return 0;
}
    
