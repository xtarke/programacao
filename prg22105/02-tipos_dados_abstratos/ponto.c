/* Includes */

#include <stdlib.h> /* malloc, free, exit */
#include <stdio.h> /* printf */
#include <math.h> /* sqrt */
#include "ponto.h"

struct pontos {
  float x;
  float y;
};

ponto* cria (float x, float y) {
  ponto* p = (ponto*) malloc(sizeof(ponto));
  if (p == NULL) {
    perror("Memoria insuficiente!\n");
    exit(1);
  }

  p->x = x;
  p->y = y;
  return p;
}

void soma(ponto *res, ponto *p1, ponto *p2){
    res->x = p1->x + p2->x;
    res->y = p1->y + p2->y;   
}

void libera (ponto* p) {
  free(p);
}

void acessa (ponto* p, float* x, float* y) {
  *x = p->x;
  *y = p->y;
}

void atribui (ponto* p, float x, float y) {
  p->x = x;
  p->y = y;
}

float distancia (ponto* p1, ponto* p2) {
  float dx = p2->x - p1->x;
  float dy = p2->y - p1->y;

  return sqrt(dx*dx + dy*dy);
}
