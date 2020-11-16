/*
 * main.c
 *
 *  Created on: 4 de out de 2019
 *      Author: aluno
 */

#include "arvore.h"


int main(){

	int i;
	vertice_t *vertices[4];

	/* Cria uma nova árvore */
	arvore_t *minha_arvore = cria_arvore(0);

	/* Cria 4 vértices ou subárvores */
	for (i=0; i < 4;i++){
		vertices[i] = cria_vertice(i);
		arvore_adicionar_vertice(minha_arvore, vertices[i]);
	}

	/* Configura um vértice como raiz */
	arvore_set_raiz(minha_arvore, vertices[0]);

	/*          0
	*          / \
	*         1   2
	*        /
	*       3
	*
	*/
	vertice_set_pai(vertices[1],vertices[0]);
	vertice_set_pai(vertices[2],vertices[0]);

	vertice_set_esq(vertices[0], vertices[1]);
	vertice_set_dir(vertices[0], vertices[2]);


	vertice_set_esq(vertices[1], vertices[3]);
	vertice_set_pai(vertices[3], vertices[1]);




	return 0;
}
