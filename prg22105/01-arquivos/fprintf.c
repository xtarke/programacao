#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char str[ ] = "Time 1 > Time 2" ;
    int h = 16;
    int t = 13;
       
    FILE *fp = fopen("texto.txt", "w");

    if (fp == NULL){
        /* Imprime erro e aborta */
        perror("Erro em main: fopen");
        exit(EXIT_FAILURE);
    } 
    
    fprintf(fp, "%s | Pontos: %d para %d\n", str, h ,t);  
        
    /* Fecha arquivo*/
    fclose(fp); 
}
