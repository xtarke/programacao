#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

typedef struct filas fila_t;

/**
  * @brief Empilha um novo inteiro. 
  * @param dado: inteiro a ser adicionado no topo da fila
  * @param fila: fila criada que receberá o dado.
  *
  * @retval Nenhum 
  */
int dequeue(fila_t* fila);

/**
  * @brief Enfileira um novo inteiro. 
  * @param dado: inteiro a ser adicionado no topo da fila
  * @param fila: fila criada que receberá o dado.
  *
  * @retval Nenhum
  */
void enqueue(int dado, fila_t* fila);

/**
  * @brief  Cria uma nova fila de números inteiros
  * @param	tamanho: tamanho da fila desejada
  *
  * @retval fila_t: ponteiro para uma nova fila
  */
fila_t* cria_fila(int tamanho);

/**
  * @brief  Libera os dados dinâmicos da fila
  * @param	fila: fila que será liberada
  *
  * @retval Nenhum
  */
void libera_fila(fila_t* fila);


#endif // FILA_H_INCLUDED
