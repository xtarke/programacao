/* Este programa deverá ser usado para contar cartas.
 * Exibe uma mensagem se o valor da carta for entre 3 e 6, assim 
 * como exibe outra mensagem se a carta for um 10, valete, dama  ou rei.
 * 
 * Este código está sobre licença ....
 * (c) 2018, IFSC
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int val;
    int contagem = 0;
    char nome_carta[3];
    
    while (nome_carta[0] != 'X') {
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
            case 'X':
                continue;
            default:
                val = atoi(nome_carta);
                
                if ((val < 1) || (val > 10)){
                    puts("Carta não reconhecida");
                    continue;                   
                }
        }
            
        /* Verifica se o valor está entre 3 a 6 */
        if ((val > 2) && (val < 7))
            contagem++;
        
        /* Verifica então se a carta é 10, J, Q ou K */
        else if (val == 10)
            contagem--;
        
        printf("Contagem atual 'e: %i\n", contagem);   
        
    }
    
    return 0;
}
    
    
 
