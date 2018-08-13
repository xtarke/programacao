/* Programa para rastrear a localização de jogadores usando latitutes e longitudes
 * Este código está sobre licença ....
 * 
 */

#include <stdio.h>

void ir_sudoeste(int lat, int lon){
    /* Diminua a latitute */
    lat = lat - 1;
    /* Aumente a longitude */
    lon = lon + 1;
}

int main() 
{
    int latitute = 32;
    int longitude = -64;
    
    ir_sudoeste(latitute, longitude);
    
    printf("Avast! Agora em: [%i, %i]\n", latitute, longitude);
    
    return 0;
}
