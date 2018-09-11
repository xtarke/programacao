/* Programa para converter coordenadas goegráficas para formato json (Google Maps)
 * Este código está sobre licença ....
 * (c) 2018, 
 */


#include <stdio.h>

int main(){

    float latitude, longitude;
    char info[64];
    int iniciado = 0;
    
    puts("data=[");
    
    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3){
        
        if (iniciado)
            printf(",\n");
        else
            iniciado = 1;
        
        
        printf("\t{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
    }
    
    puts("\n]");
    
    return 0;
}

