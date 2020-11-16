/*
 ============================================================================
 Name        : grafos-adj-matrix.c
 Author      : Renan Augusto Starke
 Version     :
 Copyright   : Renan, todo os direitos reservados
 Description : grafos com matriz de adjacencia, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "grafo.h"

int main(void) {


	int i,j;
	grafo_t *g;

    /* Cria grafo com 20 vértices */
	g = cria_grafo(20);

	/*    Adicionar arestas    *
	 *------------------------ *
	 *                         *
	 *                         *
	 *                         *
	 *                         *
	 *                         *
	 ***************************/


	/* Imprime matriz */
	for (i=0; i < 20; i++){
		for (j=0; j < 20; j++)
			printf("[%d] [%d] : %d\n", i,j, adjacente(g,i,j));
	}

	/* Gera grafo.dot que pode ser desenhado no webgraphivz */
	exportar_dot(g);


	libera_grafo(g);

	return EXIT_SUCCESS;
}
