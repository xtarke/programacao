#include <stdio.h>
#include <math.h>

/* Lembrar de adicionar a biblitoteca m"
 *
 * gcc 03_for_seno.c -lm -o app
 */

/* Função main: ponto de entrada */
int main() {
    float tensao,freq,x,y;
    float pi = 3.1415926;

    printf("Digite a frequência: ");
    scanf("%f",&freq);
    printf("Digite a tensão pico: ");
    scanf("%f",&tensao);

    float intervalo = 1/freq;

    for (x=0; x < freq; x= x + intervalo){
        y =  tensao*sin(2*pi*x);
        printf("%.2f\t%.2f\n", x,y);
    }

    return 0;
}
