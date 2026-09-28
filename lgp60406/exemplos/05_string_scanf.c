#include <stdio.h>
#include <string.h>

int main()
{
	/* Buffer para armazenar a string */
	char nome[64];

	printf("Digite seu nome: ");
	/* Scanf para guardar o valor digitado, sempre com
	 * um caractere a menos para guardar o \0     */
	scanf("%63s", nome);

	printf("Você digitou: %s", nome);

	return 0;
}

