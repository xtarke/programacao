/* Programa básico que calcula a média de 4 números */

/* Bibliotecas */
#include <stdio.h>

/* Função main: ponto de entrada */
int main() {
	/* Variáveis */
	float n1,n2,n3,n4;
	float ma;

	/* Entrada de dados */
	printf("Digite as notas:\n");
	scanf("%f",&n1);
	scanf("%f",&n2);
	scanf("%f",&n3);
	scanf("%f",&n4);

	/* Processamento */
	ma = (n1 + n2 + n3 + n4)/4;

	if (ma < 6) {
		/* Saída de dados */
		printf("Em recuperação, ");
		printf("a média é: %f\n", ma);
	}

	return 0;
}
