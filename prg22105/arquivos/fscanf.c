#include <stdio.h>
#include <stdlib.h>

#define TAM_BUFFER 80

int main(){
    char nome[TAM_BUFFER];
    int idade;
    char sexo;
       
    FILE *fp = fopen("arquivo.csv", "r");

    if (fp == NULL){
        /* Imprime erro e aborta */
        perror("Erro em main: fopen");
        exit(EXIT_FAILURE);
    } 

    /* Manipulação de dados */
    while (1){
    
        fscanf(fp, "%80[^;];%d;%c\n", nome, &idade, &sexo);
        
        printf("%s  --  %d  --- %c\n",nome, idade, sexo);
        
         if (feof(fp))
            break;
    }
        
    /* Fecha arquivo*/
    fclose(fp); 
}
