/*
 * 01-simple-malloc.c
 *
 *  Created on: Nov 16, 2020
 *      Author: Renan Augusto Starke
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *numeros;
	int quantidade;
	int i;

	/* Quantos números */
	scanf("%d", &quantidade);

	/* Alocação de memória */
	numeros = malloc(sizeof(int) * quantidade);

	if (numeros == NULL){
		perror("main");
		exit(EXIT_FAILURE);
	}

	/* Carregando dados */
	for (i=0; i < quantidade; i++)
		numeros[i] = i;

	/* Exibindo */
	for (i=0; i < quantidade; i++)
		printf("numeros[%d] = %d\n", i, numeros[i]);


	free(numeros);

	return 0;
}

