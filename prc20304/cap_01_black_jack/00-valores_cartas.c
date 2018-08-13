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

    if (nome_carta[0] == 'K') {
        val = 10;
    } 
    else if (nome_carta[0] == 'Q') {
        val = 10;
    }
    else if (nome_carta[0] == 'J') {
        val = 10;
    }
    else if (nome_carta[0] == 'A') {
        val = 11;
    }
    else
        val = atoi(nome_carta);    
    
    printf("O valor da carta é: %i\n", val);
    
    return 0;
}
    
    
