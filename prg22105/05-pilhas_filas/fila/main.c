#include <stdio.h>
#include <stdlib.h>

#include "fila.h"


int main()
{
    int x;
    fila_t* fila;

    fila = cria_fila(10);

    /* Inclusão de dados */
    enqueue(10, fila);
    enqueue(18, fila);
    enqueue(9990, fila);

    x = dequeue(fila);
    printf("%d\n",x);
    x = dequeue(fila);
    printf("%d\n",x);
    x = dequeue(fila);
    printf("%d\n",x);
   
    libera_fila(fila);

    return 0;
}
