/*
 * vertice.h
 *
 *  Created on: Jul 5, 2016
 *      Author: Renan Augusto Starke
 */

#ifndef GRAFO_VERTICE_H_
#define GRAFO_VERTICE_H_

#include "lista_enc.h"

/* Exporta os tipos de dados do vertice e arestas */
typedef struct vertices vertice_t;

/* Tipo enum o status das arestas: utilizado para exportação do DOT */
typedef enum status_aresta { VAZIO, EXPORTADA } status_aresta_t;

/* Cria um novo vertice com id */
vertice_t *cria_vertice(int id);

/* Obtem id de um vertice */
int vertice_get_id(vertice_t *vertice);

/* Configura membro do vertice
 * Ver: struct vertices */
void vertice_set_pai(vertice_t *vertice, vertice_t *pai);
void vertice_set_esq(vertice_t *vertice, vertice_t *esq);
void vertice_set_dir(vertice_t *vertice, vertice_t *dir);
void vertice_set_chave (vertice_t * vertice, int freq);

vertice_t* vertice_get_esq(vertice_t *vertice);
vertice_t* vertice_get_dir(vertice_t *vertice);
vertice_t *vertice_get_pai(vertice_t *vertice);
int vertice_get_chave (vertice_t * vertice);

int vertice_eh_folha(vertice_t *vertice);


#endif /* GRAFO_VERTICE_H_ */
