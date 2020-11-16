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
typedef struct arestas arestas_t;

/* Tipo enum o status das arestas: utilizado para exportação do DOT */
typedef enum status_aresta { VAZIO, EXPORTADA } status_aresta_t;

/* Cria um novo vertice com id */
vertice_t *criar_vertice(int id);

/* Cria uma nova aresta */
arestas_t *criar_aresta(vertice_t *fonte, vertice_t *destino, int peso);

/* Obtem id de um vertice */
int vertice_get_id(vertice_t *vertice);

/* Adiciona uma aresta a um grafo */
void adicionar_aresta(vertice_t *vertice, arestas_t *aresta);

/* Obtem a lista encadeada das arestas */
lista_enc_t *vertice_get_arestas(vertice_t *vertice);

/* Retorna o peso de um aresta */
int aresta_get_peso (arestas_t *aresta);

/* Obtem o destinho de uma aresta */
vertice_t *aresta_get_adjacente(arestas_t *aresta);

/* Retorna uma aresta caso seja fonte ou destino */
arestas_t *procurar_adjacente(vertice_t *vertice, vertice_t *adjacente);

/* Configura status de uma aresta */
void aresta_set_status(arestas_t *aresta, status_aresta_t status);

/* Obtem o status de uma aresta */
status_aresta_t aresta_get_status (arestas_t *aresta);

/* Configura membro pai da struct vertice
 * Ver: struct vertices */
void vertice_set_pai(vertice_t *vertice, vertice_t *pai);


void vertice_set_dist(vertice_t *vertice, int dist);
int vertice_get_dist(vertice_t *vertice);


#endif /* GRAFO_VERTICE_H_ */
