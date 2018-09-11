/* Use este código para um programa que leia os dados de um arquivo de GPS
 * e escreve os dados em três outros aqruivos */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    char linha[64];
    
    
    if (argc != 6) {
        fprintf(stderr, "Forneca 5 argumentos para o programa!\n");
        return -1;
    }
        
    FILE *arq_entrada = fopen("03-spooky.csv", "r");
    FILE *arq_saida_1 = fopen(argv[2], "w");
    FILE *arq_saida_2 = fopen(argv[4], "w");
    FILE *arq_saida_3 = fopen(argv[5], "w");
    
    while (fscanf(arq_entrada, "%63[^\n]\n", linha) == 1) {
        
        if (strstr(linha, argv[1]))
            fprintf(arq_saida_1,"%s\n", linha);
        else if (strstr(linha, argv[2]))
            fprintf(arq_saida_2, "%s\n", linha);
        else
            fprintf(arq_saida_3, "%s\n", linha);
    }
    
    fclose(arq_entrada);
    fclose(arq_saida_1);
    fclose(arq_saida_2);
    fclose(arq_saida_3);

    return 0;
}
