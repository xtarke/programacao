
/* Ler um vetor A de 10 números. Após, ler mais um número e guardar em uma variável X.
 * Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X.
 * Logo após, imprimir o vetor M. */

#include <stdio.h>

int main() {
	int i,x;
	int A[10], M[10];

	for (i=0; i < 10; i++) {
		printf("Digite i:");
		scanf("%d", &A[i]);
	}

	printf("Digite x:" );
	scanf("%d", &x);

	for (i=0; i < 10; i++){
		M[i] = A[i] * x;
	}

	for (i=0; i < 10;i++){
		printf("A[%d] = %d\n", i, A[i]);
	}
	for (i=0; i < 10;i++){
		printf("M[%d] = %d\n", i, M[i]);
	}


	return 0;
}
