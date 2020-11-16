/*
 * 02-pares_impares.c
 *
 *  Created on: Nov 16, 2020
 *      Author: Renan Augusto Starke
 */

#include <stdio.h>
#include <stdlib.h>

int *impares(int *a, int tamanho, int *qtdImpares);

int main(int argc, char ** argv) {
  int *numeros,*imp,qtdI, tamanho, i;

  puts("Digite a quantidade de numeros:");
  scanf("%d",&tamanho);

  numeros = (int*) malloc(sizeof(int) * tamanho);

  if (numeros == NULL)  {
    perror("main:");
    exit(-1);
  }

  puts("Digite os numeros:");
  for (i=0; i<tamanho; i++)
    scanf("%d",&numeros[i]);

  imp = impares(numeros, tamanho, &qtdI);

  puts("Impares:");
  for (i=0; i < qtdI; i++)
	  printf("%d ",imp[i]);

  free(numeros);
  free(imp);

  return 0;
}


int *impares(int *a, int tamanho, int *qtdImpares){
  int i,j = 0;
  int qtdI = 0;
  int *impares;

  for (i = 0; i < tamanho; i++)
    if (a[i] % 2 == 1)
      qtdI++;

  impares=(int*)malloc(sizeof(int)*qtdI);

  if (impares == NULL) {
    perror("impares:");
    exit(-1);
  }

  for (i = 0; i < tamanho; i++)
    if (a[i] % 2 == 1)
      impares[j++]=a[i];

  *qtdImpares = qtdI;

  return impares;
}
