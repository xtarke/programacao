/* Programa para descobrir exemplifica o uso de alocação dinâmica. 
 *
 * Produz um novo vetor de inteiros contendo apenas números
 * ímpares.
 *
 * Este código está sobre licença ....
 * (c) 2018, IFSC
 */
#include <stdio.h>
#include <stdlib.h>


int *impares(int *a, int tamanho, int *qtdImpares);

int main(int argc, char ** argv) {
  int *numeros,*imp,qtdI, tamanho, i;

  
  /* Pede para o usuário o tamanho do vetor */
  puts("Entre com o tamanho: ");
  scanf("%d",&tamanho);
  /* Cria um novo vetor */
  numeros = (int*) malloc(sizeof(int) * tamanho);
  
  if (numeros == NULL)  {
    perror("main:");
    exit(-1);
  }
  
  /* Prenche o vetor com números */
  puts("Entre com os números: ");
  for (i=0; i<tamanho; i++)
    scanf("%d",&numeros[i]);

  /* Cria um novo vetor contendo apenas números ímpares */
  imp = impares(numeros, tamanho, &qtdI);
  
  /* Exibe na tela */
  puts("Impares: ");
  for (i=0; i < qtdI; i++)
    printf("[%d]: %d\n", i, imp[i]);

  free(numeros);
  free(imp);

  return 0;
}


/* Retorna um novo vetor contendo apenas números ímpares */
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
