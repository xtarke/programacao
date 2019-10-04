/*
 * vertice.c
 *
 *  Created on: Jul 5, 2016
 *      Author: Renan Augusto Starke
 */

#include <stdlib.h>
#include <stdio.h>

#include "vertice.h"
#include "lista_enc.h"

#define TRUE 1
#define FALSE 0

struct vertices {
	int id;                /*!< Identificação numérica do vértice  */

	vertice_t *direita;    /*!< Filho à direta do vértice  */
	vertice_t *esquerda;   /*!< Filho à esquerda do vértice  */
	vertice_t* pai;        /*!< Pai do vértice. Null se raíz da árvore  */

	/* Dados associados ao vertice */
	int chave;
};

/**
  * @brief  Cria uma novo vértice
  * @param	id: identificação numérica do vértice
  *
  * @retval vertice_t: ponteiro para um novo vértice
  */
vertice_t *cria_vertice(int id)
{
	vertice_t *p = NULL;

	p = malloc(sizeof(vertice_t));

	if (p == NULL) {
		perror("cria_vertice:");
		exit(EXIT_FAILURE);
	}

	p->id = id;
	p->direita = NULL;
	p->esquerda = NULL;
	p->pai = NULL;

	return p;
}

/**
  * @brief  Obtém o identificador de um vértice
  * @param	vertice: ponteiro de um vértice
  *
  * @retval int: identificador numérico do vértice
  */
int vertice_get_id(vertice_t *vertice)
{
	if (vertice == NULL)
	{
		fprintf(stderr, "vertice_obter_id: vertice invalido!\n");
		exit(EXIT_FAILURE);
	}

	return vertice->id;
}

/**
  * @brief  Configura o pai de um vértice
  * @param	vertice: ponteiro de um vértice
  * @param  pai: ponteiro do vértice pai
  *
  * @retval Nenhum
  */
void vertice_set_pai(vertice_t *vertice, vertice_t *pai) {

	if (vertice == NULL){
			fprintf(stderr, "vertice_set_pai: vertice invalido\n");
			exit(EXIT_FAILURE);
	}

	vertice->pai = pai;
}

/**
  * @brief  Configura o filho à esquerda de um vértice
  * @param	vertice: ponteiro de um vértice
  * @param  esq: ponteiro do vértice à esquerda
  *
  * @retval Nenhum
  */
void vertice_set_esq(vertice_t *vertice, vertice_t *esq) {

	if (vertice == NULL){
			fprintf(stderr, "vertice_set_esq: vertice invalido\n");
			exit(EXIT_FAILURE);
	}

	vertice->esquerda = esq;
}

/**
  * @brief  Configura o filho à direita de um vértice
  * @param	vertice: ponteiro de um vértice
  * @param  dir: ponteiro do vértice à direita
  *
  * @retval Nenhum
  */
void vertice_set_dir(vertice_t *vertice, vertice_t *dir) {

	if (vertice == NULL){
			fprintf(stderr, "vertice_set_esq: vertice invalido\n");
			exit(EXIT_FAILURE);
	}

	vertice->direita = dir;
}

/**
  * @brief  Obtém o vértice filho à esquerda
  * @param	vertice: ponteiro de um vértice.
  *
  * @retval vertice_t: ponteiro do vértice à esquerda. NULL se não há nenhum filho
  */
vertice_t* vertice_get_esq(vertice_t *vertice) {

	if (vertice == NULL){
			fprintf(stderr, "vertice_get_esq: vertice invalido\n");
			exit(EXIT_FAILURE);
	}

	return vertice->esquerda;
}

/**
  * @brief  Obtém o vértice filho à direita
  * @param	vertice: ponteiro de um vértice.
  *
  * @retval vertice_t: ponteiro do vértice à direita.  NULL se não há nenhum filho
  */
vertice_t* vertice_get_dir(vertice_t *vertice) {

	if (vertice == NULL){
			fprintf(stderr, "vertice_get_dir: vertice invalido\n");
			exit(EXIT_FAILURE);
	}

	return vertice->direita;
}

/**
  * @brief  Obtém o dado "chave" associado à um vértice
  * @param	vertice: ponteiro de um vértice. 
  *
  * @retval int: dado inteiro associado
  */
int vertice_get_chave (vertice_t * vertice){


	if (vertice == NULL){
			fprintf(stderr, "vertice_get_freq: vertice invalido\n");
			exit(EXIT_FAILURE);
	}

	return vertice->chave;
}

/**
  * @brief  Configura o dado "chave" associado à um vértice
  * @param	vertice: ponteiro de um vértice. 
  * @param  chave: chave numérica associada à um vértice
  *
  * @retval Nenhum
  */
void vertice_set_chave (vertice_t * vertice, int chave){


	if (vertice == NULL){
			fprintf(stderr, "vertice_set_freq: vertice invalido\n");
			exit(EXIT_FAILURE);
	}

	vertice->chave = chave;
}

/**
  * @brief  Obtém o pai de um vértice
  * @param	vertice: ponteiro de um vértice. 
  *
  * @retval vertice_t: ponteiro que representa o pai
  */
vertice_t *vertice_get_pai(vertice_t *vertice){

	if (vertice == NULL){
			fprintf(stderr, "vertice_set_freq: vertice invalido\n");
			exit(EXIT_FAILURE);
	}

	return vertice->pai;
}
/**
  * @brief  Retorna se um vértice é uma folha.
  * @param	vertice: ponteiro de um vértice. 
  *
  * @retval int: 0 se não for folha, > 0 se for uma folha
  */
int vertice_eh_folha(vertice_t *vertice){

	if (vertice == NULL){
		fprintf(stderr, "eh_folha: vertice invalido\n");
		exit(EXIT_FAILURE);
	}

	if (vertice->direita == NULL && vertice->esquerda == NULL)
		return TRUE;

	return FALSE;

}
