/* Configuração da precisão do cout  */

/* Bibliotecas */
#include <stdio.h>


/* Função main: ponto de entrada */
int main() {

	float numero;
	float quociente;

	printf("Digite um número: ");
	scanf("%f", &numero);

	quociente = numero / 3;

	/* Exibe número divido por 3 */
	printf("Quociente: %f\n", quociente);
	/* Exibe com duas casas decumais */
	printf("Quociente: %.2f\n", quociente);

	return 0;
}
