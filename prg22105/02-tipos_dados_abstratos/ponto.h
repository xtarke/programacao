#ifndef PONTO_H
#define PONTO_H

/* TAD: ponto (x,y) */
/* Tipo exportado */
typedef struct pontos ponto;

/* Funções exportadas */

/* Função cria
** Aloca e retorna um ponto com coordenadas (x,y)
*/
ponto* cria (float x, float y);

/* Função libera
** Libera a memória de um ponto previamente criado.
*/
void libera (ponto* p);

/* Função acessa
** Devolve os valores das coordenadas de um ponto
*/
void acessa (ponto* p, float* x, float* y);

/* Função atribui
** Atribui novos valores às coordenadas de um ponto
*/
void atribui (ponto* p, float x, float y);

/* Função soma:
 ** Soma de dois pontos: res = p1 + p2
 */ 
void soma(ponto *res, ponto *p1, ponto *p2);

/* Função distancia
** Retorna a distância entre dois pontos
*/
float distancia (ponto* p1, ponto* p2);

#endif // PONTO_H
