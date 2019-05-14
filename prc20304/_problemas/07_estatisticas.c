#include <stdio.h>
#include <stdlib.h>
#include <float.h>

/**
  * @brief  Detecta o valor máximo do campo float um arquivo CSV conforme o padrão: 
  *         Series;Value;Time
  *         <int>;<float>;<string> 
  *         <int>;<float>;<string>
  * 
  * @param	nome_arquivo_camera: nome do arquivo CSV
  *
  * @retval float valor máximo
  */

float maximo(char *nome_arquivo_camera){    
    int lista = 0, i;
    float temp = 0, maximo = -FLT_MAX;
    char info[64];        

    FILE *arq_entrada = fopen(nome_arquivo_camera,"r");
    
    if (!arq_entrada){
        perror("maximo");
        exit(-1);        
    }    
    
    /* Ignora primeira linha */
    fgets(info,64,arq_entrada);

    while (fscanf(arq_entrada, "%d,%f,%63[^\n]", &lista, &temp, info) == 3){
        if (temp > maximo)
            maximo = temp;
    }
    
    fclose(arq_entrada);

    return maximo;
    
}

/**
  * @brief  Detecta o valor médio do campo float de um arquivo CSV conforme o padrão: 
  *         Series;Value;Time
  *         <int>;<float>;<string> 
  *         <int>;<float>;<string>
  * 
  * @param	nome_arquivo_camera: nome do arquivo CSV
  *
  * @retval float valor máximo
  */
float media(char *nome_arquivo_camera){    
    int lista = 0, i = 0;
    float temp = 0, soma = 0;
    char info[64];        

    FILE *arq_entrada = fopen(nome_arquivo_camera,"r");
    
    if (!arq_entrada){
        perror("maximo");
        exit(-1);        
    }    
    
    /* Ignora primeira linha */
    fgets(info,64,arq_entrada);

    while (fscanf(arq_entrada, "%d,%f,%63[^\n]", &lista, &temp, info) == 3){
        soma = soma + temp;
        i++;
    }
    
    soma = soma / i;
    
    
    fclose(arq_entrada);

    return soma;    
}

 
