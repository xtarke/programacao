/* Programa para descobrir valor de carta com faces de um baralho de 21 (BlackJack)
 * Este código está sobre licença ....
 * (c) 2018, IFSC
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int val;
    char nome_carta[3];
    
    puts("Entre com o texto da carta: ");
    scanf("%2s", nome_carta);
    
    /* Determina o valor da carta */
    switch (nome_carta[0]) {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        default:
            val = atoi(nome_carta);
    } 
    
    printf("O valor da carta é: %i\n", val);
    
    return 0;
}
    
    
