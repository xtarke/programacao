/****************************************************
 * Elabore um programa em C completo que receba pelo 
 * teclado dois números inteiros positivos e retorne 
 * o Máximo Divisor Comum (M.D.C.) entre eles. Utilize 
 * o processo de divisão sucessivas que efetua várias 
 * divisões até chegar a uma divisão exata. O divisor 
 * desta divisão é o M.D.C. conforme o seguinte exemplo 
 * com 48 e 30.  

 * - 48/30 = 1 e sobra 18 
 * - 30/18 = 1 e sobra 12 
 * - 18/12 = 1 e sobra 6 
 * - 12/6 = 2 e sobra 0 (divisão exata, portanto 6 é o 
 * M.D.C). 
 *******************************************************/
 
#include <stdio.h>

/**
  * @brief Calcula o máximo divisor comum entre dois números
  * @param a: primeiro valor
  * @param b: seundo valor
  *
  * @retval int: divisor comum
  */ 
int mdc(int a, int b);
 
 
 
int main(){
    
    int x = 48, y = 30;
    
    printf("Mdc de %i e %i = %i\n", x, y, mdc(x,y));   
        
    return 0;
}
 

int mdc(int a, int b){

    int resto;

    while ((resto = a % b) != 0){
        a = b;
        b = resto;
    }

    return b;
}
