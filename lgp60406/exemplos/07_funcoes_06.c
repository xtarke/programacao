/* Exemplos de funções: retorno inteiro */

#include <stdio.h>

int quintuplo(int x){
	int valor;

	valor = x * 5;

	return valor;
}

int main() {

	printf("%d\n", quintuplo(14));
	printf("%d\n", quintuplo(2));
	printf("%d\n", quintuplo(8));

	return 0;
}
