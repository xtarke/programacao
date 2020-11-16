/*
 ============================================================================
 Name        : grafos.c
 Author      :
 Version     :
 Copyright   : Renan Augusto Starke, todos os direitos reservados
 Description : grafos com lista encadeadas, Ansi-style
             : estruturas disponiveis:
             : pilha e fila
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"
#include "fila.h"
#include "grafo.h"

int main(void) {

	grafo_t *grafo;
	vertice_t* vertice;

	grafo = criar_grafo(0);

	//Adiciona todos os vertices no grafo
	vertice = grafo_adicionar_vertice(grafo, 0);
	vertice = grafo_adicionar_vertice(grafo, 1);
	vertice = grafo_adicionar_vertice(grafo, 2);
	vertice = grafo_adicionar_vertice(grafo, 3);

	adicionar_adjacentes_id(grafo, 0,  3,  1, 3, 2);
	adicionar_adjacentes_id(grafo, 1,  2,  0, 3);
	adicionar_adjacentes_id(grafo, 2,  1,  0);
	adicionar_adjacentes_id(grafo, 3,  2,  0, 1);


	exportar_grafo_dot("grafo.dot", grafo);

	liberar_grafo(grafo);

	return EXIT_SUCCESS;
}

