/*
 * utils.c
 *
 *  Created on: Aug 5, 2020
 *      Author: Renan Augusto Starke
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Exibe dados de um vetor de inteiros
 * 
 * @param vetor Vetor de inteiros
 * @param tam Tamanho do vetor
 */
void exibir_vetor(int *vetor, int tam){

	int i;

	for (i=0; i < tam; i++)
		printf("[%d] \t %d\n", i, vetor[i]);

	puts("---------------------------");

}

/**
 * @brief Gera números inteiros aleatórios em um vetor
 * 
 * @param vetor Vetor de inteiros
 * @param tam Tamanho do vetor
 */
void completar_vetor(int *vetor, int tam){

	int i;

	for (i=0; i < tam; i++)
		vetor[i] = random();
}
