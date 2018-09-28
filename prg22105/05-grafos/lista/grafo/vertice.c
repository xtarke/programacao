/*
 * vertice.c
 *
 *  Created on: Jul 5, 2016
 *      Author: Renan Augusto Starke
 */

#include <stdlib.h>
#include <stdio.h>

#include "vertice.h"
#include "../lista_enc/lista_enc.h"

struct vertices {
	int id;
	lista_enc_t *arestas;

	/* Informacoes para componentes conexos */
	int id_grupo;
	vertice_t* pai;

};

struct arestas {
	int peso;
	vertice_t *fonte;
	vertice_t *dest;

	/* status para expotacao em arquivo */
	status_aresta_t status;
};


vertice_t *cria_vertice(int id)
{
	vertice_t *p = NULL;

	p = malloc(sizeof(vertice_t));

	if (p == NULL) {
		perror("cria_vertice:");
		exit(EXIT_FAILURE);
	}

	p->id = id;
	p->arestas = cria_lista_enc();
	p->id_grupo = -1;
	p->pai = NULL;

	return p;
}

int vertice_get_id(vertice_t *vertice)
{
	if (vertice == NULL)
	{
		fprintf(stderr, "vertice_obter_id: vertice invalido!\n");
		exit(EXIT_FAILURE);
	}

	return vertice->id;
}

arestas_t *cria_aresta(vertice_t *fonte, vertice_t *destino, int peso)
{
	arestas_t *p;

	p = (arestas_t*)malloc(sizeof(arestas_t));

	if (p == NULL) {
		perror("cria_aresta:");
		exit(EXIT_FAILURE);
	}

	p->peso = peso;
	p->fonte = fonte;
	p->dest = destino;

	return p;
}

void adiciona_aresta(vertice_t *vertice, arestas_t *aresta)
{
	no_t *no;

	if (vertice == NULL || aresta == NULL)	{
		fprintf(stderr, "adiciona_aresta: dados invalidos\n");
		exit(EXIT_FAILURE);
	}

	no = cria_no(aresta);
	add_cauda(vertice->arestas, no);

}

lista_enc_t *vertice_get_arestas(vertice_t *vertice)
{
	if (vertice == NULL){
		fprintf(stderr, "vertice_get_arestas: vertice invalido\n");
		exit(EXIT_FAILURE);
	}

	return vertice->arestas;
}

int aresta_get_peso (arestas_t *aresta) {
	if (aresta == NULL){
		fprintf(stderr, "aresta_get_peso: aresta invalido\n");
		exit(EXIT_FAILURE);
	}

	return aresta->peso;
}

vertice_t *aresta_get_adjacente(arestas_t *aresta)
{
	if (aresta == NULL){
		fprintf(stderr, "aresta_get_adjacente: aresta invalido\n");
		exit(EXIT_FAILURE);
	}

	return aresta->dest;
}

arestas_t *procurar_adjacente(vertice_t *vertice, vertice_t *adjacente)
{
	no_t *no;
	arestas_t *aresta;

	if (vertice == NULL){
		fprintf(stderr, "procurar_adjacente: aresta invalido\n");
		exit(EXIT_FAILURE);
	}

	no = obter_cabeca(vertice->arestas);

	while (no){

		aresta = obter_dado(no);

		if (aresta->dest == adjacente || aresta->fonte == adjacente)
			return aresta;

		no = obtem_proximo(no);
	}

	return NULL;
}

status_aresta_t aresta_get_status (arestas_t *aresta)
{
	if (aresta == NULL){
		fprintf(stderr, "aresta_get_status: aresta invalida\n");
		exit(EXIT_FAILURE);
	}

	return aresta->status;
}

void aresta_set_status(arestas_t *aresta, status_aresta_t status)
{
	if (aresta == NULL){
		fprintf(stderr, "aresta_set_status: aresta invalida\n");
		exit(EXIT_FAILURE);
	}

	aresta->status = status;
}

/*------------------------------------------*/
void vertice_set_grupo(vertice_t *vertice, int grupo) {

	if (vertice == NULL){
			fprintf(stderr, "vertice_set_grupo: vertice invalido\n");
			exit(EXIT_FAILURE);
	}

	vertice->id_grupo = grupo;
}

int vertice_get_grupo(vertice_t *vertice) {

	if (vertice == NULL){
			fprintf(stderr, "vertice_get_grupo: vertice invalido\n");
			exit(EXIT_FAILURE);
	}

	return vertice->id_grupo;
}

void vertice_set_pai(vertice_t *vertice, vertice_t *pai) {

	if (vertice == NULL){
			fprintf(stderr, "vertice_set_pai: vertice invalido\n");
			exit(EXIT_FAILURE);
	}

	vertice->pai = pai;
}






//void vertice_set_dist(vertice_t *vertice, int dist) {
//
//	if (vertice == NULL){
//			fprintf(stderr, "vertice_set_dist: vertice invalido\n");
//			exit(EXIT_FAILURE);
//	}
//
//	vertice->dist =  dist;
//}
//
//int vertice_get_dist(vertice_t *vertice){
//
//	if (vertice == NULL){
//			fprintf(stderr, "vertice_get_dist: vertice invalido\n");
//			exit(EXIT_FAILURE);
//	}
//
//	return vertice->dist;
//}
//
//int vertices_comprimento(vertice_t *fonte, vertice_t *destino)
//{
//	arestas_t *aresta;
//
//	if (fonte == NULL || destino == NULL){
//		fprintf(stderr, "vertices_comprimento: vertices invalidos\n");
//		exit(EXIT_FAILURE);
//	}
//
//	aresta = procurar_adjacente(fonte, destino);
//
//	if (aresta == NULL) {
//		fprintf(stderr, "vertices_comprimento: vertices nao adjacentes\n");
//		exit(EXIT_FAILURE);
//	}
//
//	return aresta->peso;
//}
//
//void vertice_set_antec_caminho(vertice_t *vertice, vertice_t *antecessor){
//
//	if (vertice == NULL || antecessor == NULL){
//		fprintf(stderr, "vertice_set_antec_caminho: vertices invalidos\n");
//		exit(EXIT_FAILURE);
//	}
//
//	vertice->antecessor_caminho = antecessor;
//}
//
//vertice_t *vertice_get_antec_caminho(vertice_t *vertice) {
//	if (vertice == NULL){
//		fprintf(stderr, "vertice_get_antec_aminho: vertice invalidos\n");
//		exit(EXIT_FAILURE);
//	}
//
//	return vertice->antecessor_caminho;
//}
