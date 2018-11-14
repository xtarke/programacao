/*
 * main.c
 *
 *  Created on: Mar 8, 2017
 *      Author: Renan Augusto Starke
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "02_velhinhos.h"

#define TAM_BUFFER 64

#define DEBUG

dado_t * ler_arquivo(char *nome_arquivo, int *qtd_dados){
    
    char buffer[TAM_BUFFER];
    char nome[TAM_BUFFER];
    int idade;
    char sexo;
    int i = 0;
    int ret, dados = 0;

    FILE *fp;
    dado_t *lista;

#ifdef DEBUG
    puts("------------------------");
#endif

    fp = fopen(nome_arquivo, "r");

    if (fp == NULL){
        perror("ler_arquivo");
        exit(EXIT_FAILURE);
    }

    // conta o numero de pessoas
    while (fgets(buffer,TAM_BUFFER,fp) != NULL) dados++;

    // ignora linha do cabeçalho
    dados--;

    //aloca memoria
    lista = malloc(dados * sizeof(dado_t));

    #ifdef DEBUG
    printf("H'a %d dados neste arquivo!\n", dados);
    #endif

    // reinicia arquivo e ignora linha do cabeçalho
    rewind(fp);
    fgets(buffer,TAM_BUFFER,fp);

    //inicio do processamento
    while(fgets(buffer,TAM_BUFFER,fp) != 0)
    {
        /* sscanf é semelhando ao fscanf
        * porém cada linha é lida previamente
        * pelo fgets  */
        ret = sscanf(buffer, "%63[^,],%d,%c\n", nome,
            &idade, &sexo);

        /* Se o arquivo estiver inválido */
        if (ret != 3) {
            fprintf(stderr, "Arquivo de entrada invalido\n");
            exit(EXIT_FAILURE);
        }
    
        #ifdef DEBUG
        printf("Lido: %d\n", ret);
        printf("nome: %s\n", nome);
        printf("idade: %d\n", idade);
        printf("sexo: %c\n", sexo);
        puts("------------------------");

        printf("%d\n", strlen(nome) + 1);
        #endif

        /* Aloca memória para o nome mais \0 */
        lista[i].nome = malloc(strlen(nome) + 1);

        /* Copia os dados para a lista alocada */
        strncpy(lista[i].nome, nome, strlen(nome) + 1);
        lista[i].idade = idade;
        lista[i].sexo = sexo;

        /* iterador da lista */
        i++;
    }

    /* Fecha arquivo */
    fclose(fp);
    
    *qtd_dados = dados;    
    return lista;
}
