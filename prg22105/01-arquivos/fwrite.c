#include <stdio.h>
#include <stdlib.h>

int main(){
    int ret, nums[] = {1,2,3};
    double d = 3.556887;
    
    /* Abre arquivo */ 
    FILE *fp = fopen("meu_arquivo.bin", "wb");

    if (fp == NULL){
        /* Imprime erro e aborta */
        perror("Erro em main: fopen");
        exit(EXIT_FAILURE);
    } 

    ret = fwrite(nums, sizeof(int), 3, fp);
    printf("Escritos: %d elementos\n", ret);
    
    ret = fwrite(&d, sizeof(double), 1, fp);
    printf("Escritos: %d elementos\n", ret);
    
    /* Fecha arquivo*/
    fclose(fp); 
}
