#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

typedef struct nos no_t;

no_t *criar_no(void *dado);

void ligar_nos (no_t *fonte, no_t *destino);
void desligar_no (no_t *no);

void desligar_no_anterior (no_t *no);
void desligar_no_proximo (no_t *no);

no_t *obter_proximo (no_t *no);
no_t *obter_anterior (no_t *no);
void *obter_dado (no_t *no);

#endif // NO_H_INCLUDED
