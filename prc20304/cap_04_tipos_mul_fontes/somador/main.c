#include <stdio.h>
#include "somador.h"

int main(){
  float valor,contagem = 0,  total = 0;    

  puts("Preço do item:");
  while (scanf("%f", &valor) == 1){
    total = addicionar_com_taxa(valor, total);

    printf("Total até agora: %.2f\n\n", total);
    printf("Preço do item: ");

    contagem = contagem + 1;
  }

  printf("\nTotal final: %.2f\n", total);
  printf("Número de itens: %hi\n", contagem);

  return 0;
} 
