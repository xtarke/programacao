/* Programa para rastrear a localização de jogadores usando latitudes e longitudes
 * Este código está sobre licença ....
 * 
 */

#include <stdio.h>

void ir_sudoeste(int *lat, int *lon){
    /* Diminua a latitude */
    *lat = *lat - 1;
    /* Aumente a longitude */
    *lon = *lon + 1;
}

int main() 
{
    int latitude = 32;
    int longitude = -64;
    
    ir_sudoeste(&latitute, &longitude);
    
    printf("Avast! Agora em: [%i, %i]\n", latitude, longitude);
    
    return 0;
}
