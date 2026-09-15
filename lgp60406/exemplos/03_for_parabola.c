/* Bibliotecas */
#include <stdio.h>

/* Função main: ponto de entrada */
int main() {
    float x,y;

    for (x=-10; x < 11; x= x + 0.5){
        y =  x*x + x*x -9*x + 2;
        printf("%.2f\t%.2f\n", x, y);
    }

    return 0;
}
