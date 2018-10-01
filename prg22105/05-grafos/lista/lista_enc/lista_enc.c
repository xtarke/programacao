#include <stdio.h>
#include <stdlib.h>

#include "lista_enc.h"
#include "no.h"

#define FALSE 0
#define TRUE 1

//#define DEBUG

struct listas_enc {
    no_t *cabeca;   /*!< Referência da cabeça da lista encadeada: primeiro elemento. */
    no_t *cauda;    /*!< Referência da cauda da lista encadeada: último elemento. */
    int tamanho;    /*!< Tamanho atual da lista. */
};

/**
  * @brief  Cria uma nova lista encadeada vazia.
  * @param	Nenhum
  *
  * @retval lista_enc_t *: ponteiro (referência) da nova lista encadeada.
  */
lista_enc_t *cria_lista_enc (void) {
    lista_enc_t *p = malloc(sizeof(lista_enc_t));

    if (p == NULL){
        perror("cria_lista_enc:");
        exit(EXIT_FAILURE);
    }

    p->cabeca = NULL;
    p->cauda = NULL;
    p->tamanho = 0;

    return p;
}

/**
  * @brief  Adiciona um nó de lista no final.
  * @param	lista: lista encadeada que se deseja adicionar.
  * @param  elemento: nó que será adicionado na cauda.
  *
  * @retval Nenhum
  */
void add_cauda(lista_enc_t *lista, no_t* elemento)
{
    if (lista == NULL || elemento == NULL){
        fprintf(stderr,"add_cauda: ponteiros invalidos");
        exit(EXIT_FAILURE);
    }

   #ifdef DEBUG
   printf("Adicionando %p --- tamanho: %d\n", elemento, lista->tamanho);
   #endif // DEBUG

   //lista vazia
   if (lista->tamanho == 0)
   {
        #ifdef DEBUG
        printf("add_cauda: add primeiro elemento: %p\n", elemento);
        #endif // DEBUG

        lista->cauda = elemento;
        lista->cabeca = elemento;
        lista->tamanho++;

        desliga_no(elemento);
   }
   else {
        // Remove qualquer ligacao antiga
        desliga_no(elemento);
        // Liga cauda da lista com novo elemento
        liga_nos(lista->cauda, elemento);

        lista->cauda = elemento;
        lista->tamanho++;
   }
}

/**
  * @brief  Imprime os ponteiros de dados adicionados na lista.
  * @param	lista: lista encadeada 
  *
  * @retval Nenhum
  */
void imprimi_lista (lista_enc_t *lista)
{
    no_t *no = NULL;

    if (lista == NULL){
        fprintf(stderr,"imprimi_lista: ponteiros invalidos");
        exit(EXIT_FAILURE);
    }

    no = lista->cabeca;

    while (no){
        printf("Dados: %p\n", obter_dado(no));

        no = obtem_proximo(no);
    }
}

/**
  * @brief  Imprime os ponteiros de dados adicionados na lista. Ordem reversa.
  * @param	lista: lista encadeada
  *
  * @retval Nenhum
  */
void imprimi_lista_tras (lista_enc_t *lista)
{
    no_t *no = NULL;

    if (lista == NULL){
        fprintf(stderr,"imprimi_lista: ponteiros invalidos");
        exit(EXIT_FAILURE);
    }

    no = lista->cauda;

    while (no){
        printf("Dados: %p\n", obter_dado(no));

        no = obtem_anterior(no);
    }
}

/**
  * @brief  Retorna se a lista está vazia.
  * @param	lista: lista encadeada.
  *
  * @retval Nenhum
  */
int lista_vazia(lista_enc_t *lista)
{
	int ret;

	(lista->tamanho == 0) ? (ret = TRUE) : (ret = FALSE);

	return ret;
}

/**
  * @brief  Obtém a referência do início (cabeça) da lista encadeada.
  * @param	lista: lista que se deseja obter o início.
  *
  * @retval no_t *: nó inicial (cabeça) da lista.
  */
no_t *obter_cabeca(lista_enc_t *lista){

	if (lista == NULL){
	        fprintf(stderr,"obter_cabeca: ponteiros invalidos");
	        exit(EXIT_FAILURE);
	    }

	return lista->cabeca;
}

/**
  * @brief  Obtém a referência do final (cauda) da lista encadeada.
  * @param	lista: lista que se deseja obter a cauda
  *
  * @retval no_t *: nó final (cauda) da lista.
  */
no_t *obter_cauda(lista_enc_t *lista){

	if (lista == NULL){
		fprintf(stderr,"obter_cabeca: ponteiros invalidos");
		exit(EXIT_FAILURE);
	}

	return lista->cauda;
}

/**
  * @brief  Remove um dado do final (cauda) da lista encadeada.
  * @param	lista: lista que se deseja remover da cauda
  *
  * @retval no_t *: nó removido da lista.
  */
no_t *remover_cauda(lista_enc_t *lista)
{
	no_t *anterior;
	no_t *removido;

	if (lista == NULL){
	    fprintf(stderr,"remover_cauda: ponteiro invalido");
	    exit(EXIT_FAILURE);
	}

	if (lista->cauda == NULL)
		return NULL;

	removido = lista->cauda;

	if (lista->cauda == lista->cabeca) {
		lista->tamanho = 0;

		lista->cauda = NULL;
		lista->cabeca = NULL;

		return removido;
	}

	anterior = obtem_anterior(lista->cauda);
	desliga_no(removido);
	lista->cauda = anterior;
	desliga_no_proximo(anterior);
	lista->tamanho--;

	return removido;
}

/**
  * @brief  Remove um dado do início (cabeça) da lista encadeada.
  * @param	lista: lista que se deseja remover da cauda
  *
  * @retval no_t *: nó removido da lista.
  */
no_t *remover_cabeca(lista_enc_t *lista)
{
	no_t *proximo;
	no_t *removido;

	if (lista == NULL){
	    fprintf(stderr,"remover_cauda: ponteiro invalido");
	    exit(EXIT_FAILURE);
	}

	if (lista->cabeca == NULL)
		return NULL;

	removido = lista->cabeca;

	if (lista->cauda == lista->cabeca) {
		lista->tamanho = 0;

		lista->cauda = NULL;
		lista->cabeca = NULL;

		return removido;
	}

	proximo = obtem_proximo(lista->cabeca);
	desliga_no(removido);
	lista->cabeca = proximo;
	desliga_no_anterior(proximo);
	lista->tamanho--;


	return removido;
}

/**
  * @brief  Remove um nó da lista encadeada
  * @param	lista: lista que se deseja remover da cauda
  * @param  no_removido: nó que se deseja remover da lista
  *
  * @retval no_t *: nó removido da lista.
  */
void *remover_no(lista_enc_t *lista, no_t *no_removido)
{
	no_t *meu_no;
	void *dado;

	no_t *proximo;
	no_t *anterior;

	if (lista == NULL || no_removido == NULL){
		fprintf(stderr,"remover_no: ponteiro invalido");
		exit(EXIT_FAILURE);
	}

	//Varre lista até encontrar nó
	meu_no = obter_cabeca(lista);

	while (meu_no){
		dado = obter_dado(meu_no);

		if (meu_no == no_removido){

			if (meu_no == lista->cabeca)
				remover_cabeca(lista);
			else if (meu_no == lista->cauda)
				remover_cauda(lista);
			else
			{
				proximo = obtem_proximo(meu_no);
				anterior = obtem_anterior(meu_no);
				liga_nos(anterior, proximo);
				lista->tamanho--;
			}
			free(meu_no);
			break;
		}
		meu_no = obtem_proximo(meu_no);
	}

	return dado;
}

