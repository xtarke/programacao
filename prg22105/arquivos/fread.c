#include <stdio.h>
#include <stdlib.h>

int main(){
    int ret,i, nums[5] = {0,0,0,0,0};
    
    /* Abre arquivo */ 
    FILE *fp = fopen("meu_arquivo.bin", "rb");

    if (fp == NULL){
        /* Imprime erro e aborta */
        perror("Erro em main: fopen");
        exit(EXIT_FAILURE);
    } 

    ret = fread(nums, sizeof(int), 5, fp);
    printf("Lido: %d elementos\n", ret);
    
    for (i=0; i < 5; i++)
        printf("0x%x\n", nums[i]); 
    
    /* Fecha arquivo*/
    fclose(fp); 
}
