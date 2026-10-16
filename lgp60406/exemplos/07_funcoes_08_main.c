/* Exemplos de funções: parâmetro com vetor modular */

#include <stdio.h>
#include "07_funcoes_08.h"

int main() {

	int numeros[] = {7, 8, 9, 10};

	/* Saída de dados e chamada das funções */
	printf("Média é: %f\n", media(numeros, 4));
	printf("Máximo é: %d\n", maximo(numeros, 4));

	return 0;
}
