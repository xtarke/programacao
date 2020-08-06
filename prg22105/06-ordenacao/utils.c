/*
 * utils.c
 *
 *  Created on: Aug 5, 2020
 *      Author: Renan Augusto Starke
 */

#include <stdio.h>
#include <stdlib.h>


void exibir_vetor(int *vetor, int tam){

	int i;

	for (i=0; i < tam; i++)
		printf("[%d] \t %d\n", i, vetor[i]);

	puts("---------------------------");

}

void completar_vetor(int *vetor, int tam){

	int i;

	for (i=0; i < tam; i++)
		vetor[i] = random();
}
