#include <stdio.h>
#include <stdlib.h>

int main(){
    /* Abre arquivo */ 
    char c;
    FILE *fp = fopen("arquivo.txt", "r");

    if (fp == NULL){
        /* Imprime erro e aborta */
        perror("Erro em main: fopen");
        exit(EXIT_FAILURE);
    } 

    /* Manipulação de dados */
    while ( (c = fgetc(fp)) != EOF){
        printf("car: '%c' \n",c);
    }
    
    
    /* Fecha arquivo*/
    fclose(fp); 
}
