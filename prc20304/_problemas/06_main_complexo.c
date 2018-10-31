/*************************************************
 * Crie uma estrutura em C que represente um número 
 * complexo Z. Esta estrutura deve armazená-lo na 
 * sua forma cartesiana, formado pelo par x e y, com x 
 * representando a parte real e y, a parte imaginária. 
 * Após a criação da estrutura, você deve:

 - Inicializar três números complexos, a, b e c utilizando a sua estrutura.
 - Criar uma função que receba um número complexo Z como parâmetro e retorne seu módulo.
 - Criar uma função que receba dois número complexo a e b como argumentos e retorne c. 
 O número c é a soma dos complexos a e b, e deve ser passado por referência.
 - Cria uma função main que demonstre o funcionado do seu programa, exibindo na tela 
 os resultados da cada função e valor dos três números complexos.
**************************************************************/

#include <stdio.h>
#include "06_complexo.h"

int main(){
    
    /* Três números complexos estruturados */
    /* Inicialização na criação */
    struct complexo a = { 3, 4, {5, 0.785398}};
    struct complexo b, c;
    
    /* Inicialização por atribuição */
    b.real = 9;
    b.img = 5;
    
    /* Módulo de b */
    b.polar.modulo = modulo(b);
    
    printf("Modulo de b: %f\n", b.polar.modulo);
    
    c = soma(a,b);
    
    imprimir(c);     
    
    return 0;
}



