/******************************************************************************
 * Em uma estação meteorológica há inúmeros sensores entre eles uma câmera 
 * inteligente conectada à Internet. Após a instalação, percebeu-se que o 
 * sistema eletrônico da câmera está sofrendo com sobretemperatura devido ao 
 * encapsulamento e à exposição a radiação solar.  Com o objetivo de resolver 
 * esse problema, o sistema da câmera envia a temperatura à um servidor que 
 * armazena esses dados em um banco de dados para que seja feita uma posterior análise. 
 *
 * Os dados deste servidor foram exportados para formato CSV -- ``camera\_temp.csv'' 
 *
 * Ajude os projetistas deste sistema criando um programa em linguagem C com a 
 * seguinte especificação:
 *
 * - Seu programa deve receber o nome do arquivo do CSV como parâmetro de entrada, 
 * como por exemplo: analise.exe camera_temp.csv
 * 
 * - Seu programa deve ser separado em três arquivos:
 *   - main.c
 *   - estatisticas.c
 *   - estatisticas.h
 * - main.c deve ser o mais intuitivo possível lidando com o nome do arquivo de entrada e chamando as funções estatisticas.
 * 
 * O módulo estatisticas.c/.h deve disponibilizar duas funções:
 *   - float maximo(char *nome_arquivo_camera); -- retorna a temperatura máxima da câmera.
 *   - float media(char *nome_arquivo_camera); -- retorna a média das temperatura da câmera. 
 *
 *   - No final da função main, deve ser gerado um relatório para o usuário  no seguinte formato:
 * 
*****************************
detector de falhas na camera
arquivo: <nome arquivo csv>
- - - - - - - - - - - - - - 
t_med: <temperatura media>
t_Max: <temperatura máxima>
- - - - - - - - - - - - - - 
\end{lstlisting}
*************************************************************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include "07_estatisticas.h"

int main(int argc, char **argv){
    
    float valor_medio = 0;
    float valor_max = 0;
    
    if (argc < 2){
        fprintf(stderr, "Numero argumentos insuficientes\n");
        fprintf(stderr, "\tUtilize analise.exe <nome_do_arquivo.csv\n");
        exit(-1);
    }    
       
    valor_max = maximo(argv[1]);
    valor_medio = media(argv[1]);    
    
    puts("*****************************");
    puts("detector de falhas na camera");
    printf("arquivo: %s\n", argv[1]);
    puts("- - - - - - - - - - - - - - ");
    printf("t_med: %f\n", valor_medio);
    printf("t_Max: %f\n", valor_max);
    puts("- - - - - - - - - - - - -");
        
    return 0;
}
