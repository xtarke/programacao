#include <stdlib.h>
#include <stdio.h>

#include "../lista_enc/lista_enc.h"
#include "../lista_enc/no.h"
#include "pilha.h"

//#define DEBUG

#define FALSO 0
#define VERDADEIRO 1

struct pilhas {
	lista_enc_t *dados;     /*!< Lista encadeada que contém os dados empilhados */
};

/**
  * @brief  Cria uma nova pilha genérica
  *
  * @retval pilha_t: ponteiro para uma nova pilha
  */
pilha_t * cria_pilha (void)
{
    pilha_t *pilha = (pilha_t*)malloc(sizeof(pilha_t));

    if (pilha == NULL) {
        fprintf(stderr, "Erro alocando dados em cria_pilha!\n");
        exit(EXIT_FAILURE);
    }

    pilha->dados = cria_lista_enc();

    return pilha;
}

/**
  * @brief  Empilha um dado
  * @param dado: referência do dado (ponteiro) a ser adicionado na pilha
  * @param pilha: pilha criada que receberá o dado.
  *
  * @retval Nenhum
  */
void push(void* dado, pilha_t *pilha)
{
	no_t *no;

    if (pilha == NULL) {
        fprintf(stderr, "push: pilha invalida\n");
        exit(EXIT_FAILURE);
    }

    #ifdef DEBUG
    printf("push: %x\n", dado);
    #endif // DEBUG

    no = cria_no(dado);
    add_cauda(pilha->dados, no);
}

/**
  * @brief Desempilha um dado
  * @param pilha: pilha criada que retornará o dado.
  *
  * @retval void *: Referência do dado desempilhado
  */
void *pop(pilha_t *pilha)
{
	no_t *no;
	void *dado;

    if (pilha == NULL){
        fprintf(stderr, "pop: pilha invalida!\n");
        exit(EXIT_FAILURE);
    }

    #ifdef DEBUG
    //printf("pop: %d\n", pilha->data[topo - 1]);
    #endif // DEBUG

    no = remover_cauda(pilha->dados);
    dado = obter_dado(no);
    free(no);

    return dado;
}


/**
  * @brief Libera os dados da pilha. Somente se ela estiver fazia
  * @param pilha: pilha criada.
  *
  * @retval Nenhum 
  */
void libera_pilha(pilha_t* pilha)
{
	if (pilha == NULL) {
        fprintf(stderr, "Erro em libera_pilha\n");
        exit(EXIT_FAILURE);
    }

    if (!lista_vazia(pilha->dados))    {
    	fprintf(stderr, "Impossivel liberar pilha, ainda ha dados\n");
    	exit(EXIT_FAILURE);
    }

    free(pilha->dados);
    free(pilha);

}

/**
  * @brief Retorna se a pilha está vazia
  * @param pilha: pilha criada
  *
  * @retval int: verdadeiro se a pilha estiver vazia, senão falso 
  */
int pilha_vazia(pilha_t *pilha)
{
    if (pilha == NULL) {
        fprintf(stderr, "pilha_vazia: pilha invalida\n");
        exit(EXIT_FAILURE);
    }

    return lista_vazia(pilha->dados);
}
