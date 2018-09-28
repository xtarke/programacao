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

#include "pilha/pilha.h"
#include "fila/fila.h"
#include "grafo/grafo.h"

int main(void) {

	grafo_t *grafo;
	vertice_t* vertice;

	fila_t *fila;
	int id;

	grafo = cria_grafo(0);
	fila = cria_fila();

	//Adiciona todos os vertices no grafo
	vertice = grafo_adicionar_vertice(grafo, 1);
	enqueue(vertice, fila);

	vertice = grafo_adicionar_vertice(grafo, 2);
	enqueue(vertice, fila);

	vertice = grafo_adicionar_vertice(grafo, 3);
	enqueue(vertice, fila);

	vertice = grafo_adicionar_vertice(grafo, 4);
	enqueue(vertice, fila);

	vertice = grafo_adicionar_vertice(grafo, 5);
	enqueue(vertice, fila);

	vertice = grafo_adicionar_vertice(grafo, 6);
	enqueue(vertice, fila);

	vertice = grafo_adicionar_vertice(grafo,7);
	enqueue(vertice, fila);

	vertice = grafo_adicionar_vertice(grafo,8);
	enqueue(vertice, fila);

	vertice = grafo_adicionar_vertice(grafo,9);
	enqueue(vertice, fila);

	vertice = grafo_adicionar_vertice(grafo,10);
	enqueue(vertice, fila);

	vertice = grafo_adicionar_vertice(grafo,11);
	enqueue(vertice, fila);

	vertice = grafo_adicionar_vertice(grafo,12);
	enqueue(vertice, fila);

	vertice = grafo_adicionar_vertice(grafo,13);
	enqueue(vertice, fila);



        // constrói grafo
	while (!fila_vazia(fila))	{
		vertice = dequeue(fila);
		id = vertice_get_id(vertice);

		switch(id){
			case 1:
				adiciona_adjacentes(grafo, vertice, 6, 6, 14, 2, 7, 3, 9);
				break;
			case 2:
				adiciona_adjacentes(grafo, vertice, 6, 1, 7, 3, 10, 4, 15);
				break;
			case 3:
				adiciona_adjacentes(grafo, vertice, 8, 6, 2, 1, 9, 2, 10, 4, 11);
				break;
			case 4:
				adiciona_adjacentes(grafo, vertice, 6, 5, 6, 3, 11, 2, 15);
				break;
			case 5:
				adiciona_adjacentes(grafo, vertice, 4, 6, 9, 4, 6);
				break;
			case 6:
				adiciona_adjacentes(grafo, vertice, 6, 1, 14, 3, 2, 5, 9);
				break;
			case 7:
				adiciona_adjacentes(grafo, vertice, 2, 8, 9);
				break;
			case 8:
				adiciona_adjacentes(grafo, vertice, 4, 7, 9, 9, 4);
				break;
			case 9:
				adiciona_adjacentes(grafo, vertice, 2, 8, 4);
				break;
			case 10:
				adiciona_adjacentes(grafo, vertice, 4, 11, 1, 12, 8);
				break;
			case 11:
				adiciona_adjacentes(grafo, vertice, 4, 10, 1, 12, 4);
				break;
			case 12:
				adiciona_adjacentes(grafo, vertice, 4, 11, 4, 10, 8);
				break;
			default:
				break;
		}
	}

	exportar_grafo_dot("grafo.dot", grafo);

	libera_fila(fila);
	libera_grafo(grafo);

	return EXIT_SUCCESS;
}

