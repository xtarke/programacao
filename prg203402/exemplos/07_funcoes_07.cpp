/* Exemplos de funções: parâmetro com string */


#include <iostream>
using namespace std;

float media(int *vetor, int tamanho){
	int i, somatorio=0;
	float media;

	for (i=0; i < tamanho; i++)
		somatorio = somatorio + vetor[i];

	media = (float)somatorio / tamanho;

	return media;
}

int main() {

	int numeros[] = {7, 8, 9, 10};

	cout << "Média é: " << media(numeros, 4) << endl;

	return 0;
}
