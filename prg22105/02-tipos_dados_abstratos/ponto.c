/* Includes */

#include <stdlib.h> /* malloc, free, exit */
#include <stdio.h> /* printf */
#include <math.h> /* sqrt */
#include "ponto.h"

struct pontos {
  float x;
  float y;
};

ponto_t * cria (float x, float y) {
  ponto_t *p = malloc(sizeof(ponto_t));
  if (p == NULL) {
    perror("Memoria insuficiente!\n");
    exit(1);
  }

  p->x = x;
  p->y = y;
  return p;
}

void soma(ponto_t *res, ponto_t *p1, ponto_t *p2){
    res->x = p1->x + p2->x;
    res->y = p1->y + p2->y;   
}

void libera (ponto_t *p) {
  free(p);
}

void acessa (ponto_t *p, float* x, float* y) {
  *x = p->x;
  *y = p->y;
}

void atribui (ponto_t *p, float x, float y) {
  p->x = x;
  p->y = y;
}

float distancia (ponto_t *p1, ponto_t* p2) {
  float dx = p2->x - p1->x;
  float dy = p2->y - p1->y;

  return sqrt(dx*dx + dy*dy);
}
