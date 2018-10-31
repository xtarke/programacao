#include <stdio.h>
#include <math.h> 
#include "06_complexo.h"



float modulo (struct complexo a){
    return sqrt(pow(a.real,2) + pow(a.img,2));
}

struct complexo soma (struct complexo a, struct complexo b){
    struct complexo soma;
    
    soma.real = a.real + b.real;
    soma.img = a.img + b.img;    
    
    return soma;
}

void imprimir(struct complexo z) {
    printf("Real: %f\n", z.real);
    printf("Img: %f\n", z.img);
    
}
