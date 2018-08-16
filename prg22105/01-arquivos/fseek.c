#include <stdio.h>
#include <stdlib.h>

int main(){
    /* Abre arquivo */ 
    FILE *fp = fopen("meu_arquivo.txt", "w");

    if (fp == NULL){
        /* Imprime erro e aborta */
        perror("Erro em main: fopen");
        exit(EXIT_FAILURE);
    } 

    /* Manipulação de dados */
    fputs("This is an apple", fp);
    fseek(fp, 9, SEEK_SET);
    fputs(" sam", fp);

    /* Fecha arquivo*/
    fclose(fp); 
}
