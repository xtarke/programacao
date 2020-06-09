#ifndef PONTO_H
#define PONTO_H

/* TAD: ponto (x,y) */
/* Tipo exportado */
typedef struct pontos ponto_t;

/* Funções exportadas */

/* Função cria
** Aloca e retorna um ponto com coordenadas (x,y)
*/
ponto_t* cria (float x, float y);

/* Função libera
** Libera a memória de um ponto previamente criado.
*/
void libera (ponto_t *p);

/* Função acessa
** Devolve os valores das coordenadas de um ponto
*/
void acessa (ponto_t *p, float* x, float* y);

/* Função atribui
** Atribui novos valores às coordenadas de um ponto
*/
void atribui (ponto_t *p, float x, float y);

/* Função soma:
 ** Soma de dois pontos: res = p1 + p2
 */ 
void soma(ponto_t *res, ponto_t *p1, ponto_t *p2);

/* Função distancia
** Retorna a distância entre dois pontos
*/
float distancia (ponto_t *p1, ponto_t *p2);

#endif // PONTO_H
