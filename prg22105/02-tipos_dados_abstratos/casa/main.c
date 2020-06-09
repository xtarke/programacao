/*
 * main.c
 *
 *  Created on: Apr 11, 2020
 *      Author: Renan
 */

#include <stdio.h>


#include "casas.h"


int main(){
	int i;
	int qtd;
	casa_t **minhas_casas;

	minhas_casas = ler_arquivo_csv("casa_alugar.csv", &qtd);


//	/* Exibir dados */
//	for (i=0; i < qtd; i++){
//		printf ("%s %d\n", obter_nome(minhas_casas[i]), obter_area(minhas_casas[i]));
//	}

	printf("Media banehiros: %f\n", media_banheiros(minhas_casas,qtd));

	liberar_casa(minhas_casas,qtd);


	return 0;
}
