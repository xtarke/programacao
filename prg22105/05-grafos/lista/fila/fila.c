#include <stdlib.h>
#include <stdio.h>

#include "../lista_enc/lista_enc.h"
#include "../lista_enc/no.h"
#include "fila.h"

#define FALSO 0
#define VERDADEIRO 1

struct filas {
	lista_enc_t *dados;     /*!< Lista encadeada que contém os dados enfileirados */
};


/**
  * @brief  Cria uma nova fila genérica
  *
  * @retval fila_t: ponteiro para uma nova fila
  */
fila_t * cria_fila (void)
{
	fila_t *p = (fila_t*)malloc(sizeof(fila_t));

    if (p == NULL) {
        fprintf(stderr, "Erro alocando dados em cria_fila!\n");
        exit(EXIT_FAILURE);
    }

    p->dados = cria_lista_enc();

    return p;
}


/**
  * @brief Enfileira um novo dado. 
  * @param dado: referência do dado (ponteiro) a ser adicionado no topo da fila
  * @param fila: fila criada que receberá o dado.
  *
  * @retval Nenhum
  */
void enqueue(void* dado, fila_t *fila)
{
	no_t *no;

    if (fila == NULL) {
        fprintf(stderr, "push: pilha invalida\n");
        exit(EXIT_FAILURE);
    }

    #ifdef DEBUG
    printf("enqueue: %x\n", dado);
    #endif // DEBUG

    no = cria_no(dado);
    add_cauda(fila->dados, no);
}


/**
  * @brief Retira da fila um dado. 
  * @param fila: fila criada que retornará o dado.
  *
  * @retval Nenhum 
  */
void *dequeue(fila_t *fila)
{
	no_t *no;
	void *dado;

    if (fila == NULL){
        fprintf(stderr, "dequeue: fila invalida!\n");
        exit(EXIT_FAILURE);
    }

    no = remover_cabeca(fila->dados);
    dado = obter_dado(no);
    free(no);

    return dado;
}

/**
  * @brief Libera os dados da fila. Somente se ela estiver fazia
  * @param fila: fila criada.
  *
  * @retval Nenhum 
  */
void libera_fila(fila_t* fila)
{
    if (fila == NULL) {
        fprintf(stderr, "Erro em libera_fila\n");
        exit(EXIT_FAILURE);
    }

    if (!lista_vazia(fila->dados)){
    	fprintf(stderr, "Impossivel liberar fila, ainda ha dados\n");
		exit(EXIT_FAILURE);
    }

    free(fila->dados);
    free(fila);
}

/**
  * @brief Retorna se a fila está vazia
  * @param fila: fila criada
  *
  * @retval int: verdadeiro se a fila estiver vazia, senão falso 
  */
int fila_vazia(fila_t *fila)
{
    if (fila == NULL) {
        fprintf(stderr, "fila_vazia: fila invalida\n");
        exit(EXIT_FAILURE);
    }

    return lista_vazia(fila->dados);
}
