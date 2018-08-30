#include <stdlib.h>
#include <stdio.h>

#include "pilha.h"

struct pilhas {
    int topo;                       /*!< Índice do vetor que representa o topo da fila */
    int data[TAMANHO_DADOS_PILHA]; /*!< Vetor que manterá os dados. */
};


/**
  * @brief  Cria uma nova pilha com TAMANHO_DADOS_PILHA inteiros
  * @param	Nenhum
  *
  * @retval pilha_t: ponteiro para uma nova pilha
  */
pilha_t * cria_pilha (void)
{
    pilha_t *pilha = (pilha_t*)malloc(sizeof(pilha_t));

    pilha->topo = 0;

    return pilha;
}


/**
  * @brief  Empilha um novo inteiro. 
  * @param dado: inteiro a ser adicionado no topo da pilha
  * @param pilha: pilha criada que receberá o dado.
  *
  * @retval Nenhum
  */
void push(int dado, pilha_t *pilha)
{
    int topo = pilha->topo;

    if (topo > TAMANHO_DADOS_PILHA) {
        fprintf(stderr, "Tamanho maximo da pilha atingido!\n");
        exit(EXIT_FAILURE);
    }

    pilha->data[topo] = dado;
    pilha->topo++;
}

/**
  * @brief Desempilha um inteiro. 
  * @param pilha: pilha criada que retornará o dado.
  *
  * @retval int: valor inteiro do último dado empilhado.
  */ 
int pop(pilha_t *pilha)
{
    int topo = pilha->topo;

    if (topo < 0 || topo > TAMANHO_DADOS_PILHA){
        fprintf(stderr, "Pilha corrompida!\n");
        exit(EXIT_FAILURE);
    }

    if (topo == 0) {
        fprintf(stderr, "pop() em pilha vazia!\n");
        return 0;
    }

    pilha->topo--;
    return pilha->data[topo - 1];
}
