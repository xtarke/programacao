#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main()
{
    //variáveis
    float x,y;
    ponto_t *p1, *p2, *p3;

    //cria ponto
    p1 = cria(5.5, 8.9);
    p2 = cria(4.0, 2.1);
    p3 = cria(0,0);

    soma(p3, p1, p2);

    //Acesso direto não é permitido
    //x = p->a;

    //cópia coordenadas de p para x e y
    acessa(p1, &x, &y);
    //mostra
    printf("Criado ponto p1: %f  %f\n",x, y);
    
    acessa(p3, &x, &y);
     //mostra
    printf("Valores do ponto p3: %f  %f\n",x, y);

    //libera memorua
    libera(p1);
    libera(p2);

    return 0;
}
