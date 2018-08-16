#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    /* Abre arquivo */ 
    FILE *fp = fopen("exemplo.txt", "r");

    if (fp == NULL){
        /* Imprime erro e aborta */
        perror("Erro em main: fopen");
        exit(EXIT_FAILURE);
    } 

    /* Manipulação de dados */

    /* Fecha arquivo*/
    fclose(fp); 
}
