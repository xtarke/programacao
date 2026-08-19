/* Programa básico que exibe "olá mundo" */

/* Bibliotecas */
#include <stdio.h>


/* Função main: ponto de entrada */
int main() {
	int x;
	float y;
	char z;

	printf("Entre com um (inteiro real caractere): ");
	scanf("%d %f %c", &x, &y, &z);

	printf("\n");

	printf("Inteiro: %d\n"
		   "Real: %f\n"
		   "caracter: %c\n",
		   x,y,z);

	return 0;
}
