 /****************************************************************
  * Implemente um programa que teste uma função que seja capaz de 
  * inicializar um vetor de inteiros de $n$ elementos com um valor 
  * arbitrário. Cabeçalho recomendável: 

  void inicializar(int *vetor, int tam, int valor);
  
  ****************************************************************/
 
#include <stdio.h>
 
/**
  * @brief Inicializar um vetor de inteiros de $n$ elementos com um valor arbitrário
  * @param vetor: um vetor de inteiros
  * @param tam: tamanho do vetor
  * @param valor: valor para inicializar
  *
  * @retval Nenhum
  */ 
void inicializar(int *vetor, int tam, int valor);
  

int main(){
    int x[16],i;
    
    inicializar(x,16,-8);
    
    for (i=0; i < 16; i++)
        printf("x[%i] = %i\n", i, x[i]);    
    
    return 0;
}
 
 
 
void inicializar(int *vetor, int tam, int valor){
    int i;

    for (i = 0; i < tam; i++)
        vetor[i] = valor;
}
