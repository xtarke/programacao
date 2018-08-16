#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_BUFFER 80

int main(){
    char str[ ] = "Teste  de string 12345566" ;
    int i;
       
    FILE *fp = fopen("texto.txt", "w");

    if (fp == NULL){
        /* Imprime erro e aborta */
        perror("Erro em main: fopen");
        exit(EXIT_FAILURE);
    } 

    /* Manipulação de dados */
    for (i=0; i < strlen(str); i++){
        
        if (fputc(str[i], fp) < 0) {
            perror("fputc");
            exit(EXIT_FAILURE);
        }
    }
    
    /* Fecha arquivo*/
    fclose(fp); 
}
