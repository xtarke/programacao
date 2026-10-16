/* Exemplos de funções: parâmetro com vetor */


#include <stdio.h>
#include <limits.h>

float media(int *vetor, int tamanho){
	int i, somatorio=0;
	float media;

	for (i=0; i < tamanho; i++)
		somatorio = somatorio + vetor[i];

	media = (float)somatorio / tamanho;

	return media;
}

float maximo(int *vetor, int tamanho){
	int i, somatorio=0;
	int maximo = INT_MIN;

	float media;

	for (i=0; i < tamanho; i++)
		somatorio = somatorio + vetor[i];

	media = (float)somatorio / tamanho;

	return media;
}

int main() {

	int numeros[] = {7, 8, 9, 10};

	/* Saída de dados e chamada das funções */
	printf("Média é: %f\n", media(numeros, 4));
	printf("Máximo é: %d\n", maximo(numeros, 4));

	return 0;
}

