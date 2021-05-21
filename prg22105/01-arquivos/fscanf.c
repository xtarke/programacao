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

    /* Manipulação de dados: Leitura dos dados:
     * %79[^;] : Ler uma string de até 79 caractres. Para somente quando encontrar ;
     * %d: dado inteiro
     * %c: dada caracter */    
    
    /* while só termina quando não for mais possível converter 3 dados do arquivo */    
    while (fscanf(fp, "%80[^;];%d;%c\n", nome, &idade, &sexo) == 3){
        
        printf("%s  --  %d  --- %c\n",nome, idade, sexo);
    }
        
    /* Fecha arquivo*/
    fclose(fp); 
}
