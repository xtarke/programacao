/*
 ============================================================================
 Name        : ordenacao.c
 Author      : Renan Augusto Starke
 Version     :
 Copyright   : Instituto Federal de Santa Catarina
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

/* Funções auxiliares */
#include "utils.h"

/* Include das ordencações */
#include "bubble_sort.h"

/* Tamanho do vetor */
#define TAM_VETOR 10


int main(void) {

	int *vet;

	/* Muda a smenete do gerador de número aleatórios */
	srand(getpid()^time(NULL));

	/* Aloca memória do vetor */
	vet = (int *)malloc(sizeof(int) * TAM_VETOR);

	/* Preenche vetor com numeros aleatórios */
	completar_vetor(vet, TAM_VETOR);

	/* Exibe dados */
	exibir_vetor(vet,TAM_VETOR);

	/* Ordena */
	bubble_sort(vet, TAM_VETOR);

	/* Exibe dados */
	exibir_vetor(vet,TAM_VETOR);

	free(vet);

	return EXIT_SUCCESS;
}
