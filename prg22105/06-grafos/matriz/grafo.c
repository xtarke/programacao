/*
 * grafo.c
 *
 *  Created on: Nov 18, 2016
 *      reviewed: Jul 29, 2020
 *      Author: Renan Augusto Starke
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "grafo.h"

struct vertices {
	int id;         /*!< Identificação numérica do vértice  */
	
    /* Mais informações, se necessário */
};

struct arestas {
	int adj;        /*!< Valor booleando. Verdadeiro representa uma adjacência entre dois vértices  */
	
    /* Mais informações, se necessário */
};

struct grafos{
	int n_vertices;        /*!< Número de vértices do grafo  */
	vertice_t *vertices;   /*!< Vetor de ponteiros: conjunto V */
	aresta_t **matriz_adj;	/* Matriz de adjacência: conjunto E */
};

/**
  * @brief  Cria uma novo grafo estático
  * @param	vertices: quantidade de vértices
  *
  * @retval grafo_t: ponteiro para um novo grafo
  */
grafo_t *cria_grafo(int vertices)
{
	int i;
	aresta_t **matriz_adj;
	/* Aloca estrutura do grafo */
    grafo_t *g = malloc(sizeof(grafo_t));

	if (g == NULL){
		perror("cria_grafo (g)");
		exit(EXIT_FAILURE);
	}

	/* Guarda número total de vértices */
	g->n_vertices = vertices;
    /* Aloca vértices */
	g->vertices = malloc(vertices * sizeof(vertice_t));

	if (g->vertices == NULL){
		perror("cria_grafo (vertices)");
		exit(EXIT_FAILURE);
	}

	/* Zera vetor de vértices */
	memset(g->vertices, 0, vertices * sizeof(vertice_t));
    
    
    /* Inicializa ID */
    for ( i = 0; i < vertices; i++ ){
        g->vertices[i].id = i;
    }    

    /* Aloca 1a dimensão da matriz de adjacência */
	matriz_adj = malloc(vertices * sizeof(aresta_t *));

	if (matriz_adj == NULL){
		perror("cria_grafo (matriz_adj)");
		exit(EXIT_FAILURE);
	}

	 /* Aloca 2a dimensão da matriz de adjacência */
	for ( i = 0; i < vertices; i++ )
	{
		matriz_adj[i] = calloc(vertices, sizeof(aresta_t));

		if (matriz_adj[i] == NULL){
			perror("cria_grafo (matriz_adj[i])");
			exit(EXIT_FAILURE);
		}
	}

	g->matriz_adj = matriz_adj;

	return g;
}

/**
  * @brief  Libera a memória utilizada pelo grafo
  * @param	g: um grafo instanciado
  *
  * @retval Nenhum
  */
void libera_grafo (grafo_t *g){
	int i;

	if (g == NULL){
		perror("libera_grafo");
		exit(EXIT_FAILURE);
	}

	for (i=0; i < g->n_vertices; i++)
		free(g->matriz_adj[i]);

	free(g->matriz_adj);
	free(g->vertices);
	free(g);
}

/**
  * @brief  Cria adjacência entre vértices u e v
  * @param	g: um grafo instanciado
  * @param	u: índice do vértice u
  * @param  v: índice do vértice v
  *
  * @retval int: verdadeiro se adjacência for criada
  */
int cria_adjacencia(grafo_t *g, int u, int v){

	if (g == NULL){
		return FALSE;
	}

	if (u > g->n_vertices || v > g->n_vertices )
		return FALSE;

	g->matriz_adj[u][v].adj = TRUE;

	return TRUE;
}

/**
  * @brief  Remove adjacência entre vértices u e v
  * @param	g: um grafo instanciado
  * @param	u: índice do vértice u
  * @param  v: índice do vértice v
  *
  * @retval int: verdadeiro se adjacência for removida
  */
int rem_adjacencia(grafo_t *g, int u, int v){

	if (g == NULL){
		return FALSE;
	}

	if (u > g->n_vertices || v > g->n_vertices)
		return FALSE;

	g->matriz_adj[u][v].adj = FALSE;

	return TRUE;
}

/**
  * @brief  Retorna adjacência entre vértices u e v
  * @param	g: um grafo instanciado
  * @param	u: índice do vértice u
  * @param  v: índice do vértice v
  *
  * @retval int: verdadeiro se u for adjacente a v
  */
int adjacente(grafo_t *g, int u, int v){

	if (u > g->n_vertices || v > g->n_vertices)
		return FALSE;

	return ((g->matriz_adj[u][v].adj));
}


/**
  * @brief  Exporta o grafo no formato dot (graphviz)
  * @param	g: um grafo instanciado
  *
  * @retval Nenhum
  */
void exportar_dot(grafo_t *g){

	int i,j;

	FILE *fp = fopen("grafo.dot", "w");

	if (!fp){
		perror("exportar_dot");
		exit(EXIT_FAILURE);
	}

	fputs("graph {", fp);

	for (i=0; i < g->n_vertices; i++)
		for (j=i; j < g->n_vertices;j++){

			if (adjacente(g,i,j))
				fprintf(fp, "\t%d -- %d [label = %d];\n",
										i,
										j,
										0);

		}

	fputs("}", fp);

	fclose(fp);
}

