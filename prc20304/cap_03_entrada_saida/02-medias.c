/* Programa para calcular a media de todos os dados de um arquivo csv.
 * 
 * Os números reais devem utilizar separador decimal . e estarem dispostos
 * um por linha:
 * 
 * dados.csv:
 * ----------
 * 3.5
 * 3.7
 * 5.7
 * 7.8 
 * 
 * Este código está sobre licença ....
 * (c) 2018, 
 */

#include <stdio.h>


int main(){
    
    int i = 0;
    float dado,soma = 0;
    
    while (scanf("%f", &soma) == 1){
        soma += dado;
        i++;
    }
    
    printf("soma: %f\n", soma);
    
    
}


