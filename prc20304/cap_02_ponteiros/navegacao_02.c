/* Programa para rastrear a localização de jogadores usando latitutes e longitudes
 * Este código está sobre licença ....
 */

#include <stdio.h>

void ir_sudoeste(............. , ...........){
    /* Diminua a latitute */
    
    ........ = ........ - 1;
    /* Aumente a longitude */
    
    ....... = ........ + 1;
}

int main() 
{
    int latitude = 32;
    int longitude = -64;
    
    ir_sudoeste(................. , ................);
    
    printf("Avast! Agora em: [%i, %i]\n", latitute, longitude);
    
    return 0;
}

//   &lon   *latitude   int         &lat   *lon   *longitude
//   *lat   *lat        &latitude   *lon   &lon   &longitude
//   int *   lat        int         &lat    lon   int *  
