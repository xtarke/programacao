/* Programa que exibe apenas coordenadas goegráficas dentro do
 * retângulo das bermudas no formato CSV. Use com a ferramente 
 * geo2json
 * 
 * Este código está sobre licença ....
 * (c) 2018, 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float latitude;
    float longitude;

    char info[64];

    while (scanf("%f,%f,%63[^\n]", &latitude, &longitude, info) == 3)
        if ((latitude > 26) && (latitude < 34))
            if ((longitude > -76) && (longitude < -64))
                printf("%f,%f,%s\n", latitude,longitude, info);

    return 0;

}
