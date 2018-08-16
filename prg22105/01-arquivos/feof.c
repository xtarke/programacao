#include <stdio.h>
#include <stdlib.h>

#define TAM_BUFFER 80

int main(){
    /* Abre arquivo */ 
    char c[TAM_BUFFER];
    FILE *fp = fopen("arquivo.txt", "r");

    if (fp == NULL){
        /* Imprime erro e aborta */
        perror("Erro em main: fopen");
        exit(EXIT_FAILURE);
    } 

    /* Manipulação de dados */
    while (1){        
        fgets(c, TAM_BUFFER, fp);
        
        if (feof(fp))
            break;
        
        printf("linha: %s \n",c);
    }    
    
    /* Fecha arquivo*/
    fclose(fp); 
}
