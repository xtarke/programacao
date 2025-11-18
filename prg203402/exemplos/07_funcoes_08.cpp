/* Exemplos de funções em módulos  */


#include <iostream>
#include <climits>

using namespace std;

float media(int *vetor, int tamanho){
	int i, somatorio=0;
	float media;

	for (i=0; i < tamanho; i++)
		somatorio = somatorio + vetor[i];

	media = (float)somatorio / tamanho;

	return media;
}

int maximo(int *vetor, int tamanho){
	int i;
	int maximo = INT_MIN;

	for (i=0; i < tamanho; i++){
		if (vetor[i] > maximo)
			maximo = vetor[i];
	}

	return maximo;
}
