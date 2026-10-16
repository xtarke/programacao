/* Exemplos de funções: parâmetro com vetor modular */


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

