#ifndef LISTA_ENC_H_INCLUDED
#define LISTA_ENC_H_INCLUDED

#include "no.h"

typedef struct listas_enc lista_enc_t;

lista_enc_t *cria_lista_enc(void);
void add_cauda(lista_enc_t *lista, no_t* elemento);
no_t *obter_cabeca(lista_enc_t *lista);
int lista_vazia(lista_enc_t *lista);

no_t *remover_cauda(lista_enc_t *lista);
no_t *remover_cabeca(lista_enc_t *lista);

void imprimi_lista (lista_enc_t *lista);
void imprimi_lista_tras (lista_enc_t *lista);

/* Retorna o dado de um no removido*
 * no_removido é liberado da memoória  */
void *remover_no(lista_enc_t *lista, no_t *no_removido);


#endif // LISTA_ENC_H_INCLUDED
