#include <stdio.h>
#include <limits.h> //Contém os valores máximos dos tipos inteiros
#include <float.h>  //Contém os valores máximos dos tipos reais

int main(){
    
    
    printf("O valor de INT_MAX é %i\n", INT_MAX);
    printf("O valor de INT_MIN é %i\n", INT_MIN);
    printf("Um inteiro ocupa %ld bytes\n", sizeof(int));
    
    printf("O valor de FLT_MAX é %f\n", FLT_MAX);
    printf("O valor de FLT_MIN é %.50f\n", FLT_MIN);
    printf("Um float ocupa %ld bytes\n", sizeof(float));
    
    return 0;
}
