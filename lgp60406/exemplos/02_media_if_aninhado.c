/* Programa básico com if aninhado */

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
		printf("Sua média é: %f\n", ma); 
	}
	else {
		printf("Aprovado, parabéns.\n");
		if (ma > 9){
			printf("Sua média foi mair que 9.\n");
		}
	}

	return 0;
}
