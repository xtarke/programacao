/* Programa básico com if e else if*/

/* Bibliotecas */
#include <stdio.h>

/* Função main: ponto de entrada */
int main() {
	/* Variáveis */
	float temperatura;

	printf("Digite a temperatura: ");
	scanf("%f",&temperatura);

	if (temperatura > 32){
		printf("Esté quente lá fora.\n");
	}
	else if (temperatura < 15){
		printf("Está frio lá fora.\n");
	}
	else {
		printf("Está agradável!\n");
	}

	return 0;
}
