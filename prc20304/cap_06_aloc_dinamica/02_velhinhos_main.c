/*
 * main.c
 *
 *  Created on: Mar 8, 2017
 *      Author: Renan Augusto Starke
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "02_velhinhos.h"

int main(){
    
    int i;
    int n_linhas;
    dado_t *dados;
    
    
    dados = ler_arquivo("velhinhos.csv", &n_linhas);

	/* Mostra os dados lidos */
	for (i=0; i < n_linhas; i++){
		printf("nome: %s\n", dados[i].nome);
		printf("idade: %d\n", dados[i].idade );
		printf("sexo: %c\n", dados[i].sexo);
		puts("------------------------");
	}

	/* Desaloca memória */
	for (i=0; i < n_linhas; i++){
		free(dados[i].nome);
	}
	free(dados);


	return 0;
}
