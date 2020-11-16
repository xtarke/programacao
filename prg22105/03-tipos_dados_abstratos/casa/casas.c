/*
 * casas.c
 *
 *  Created on: Apr 11, 2020
 *      Author: Renan
 */

/* Includes do sistemas */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Includes do projeto */
#include "casas.h"

// #define DEBUG

struct casas {
	char cidade[64];
	int area;
	int quartos;
	int banheiros;
	int garagens;
};

char *obter_nome(casa_t * casa){
	return casa->cidade;
}

int obter_area(casa_t * casa){
	return casa->area;
}



casa_t *cria_casa (char *cidade, int area, int quartos, int banheiros, int garagens){

	casa_t *dado = malloc(sizeof(casa_t));

	if (dado == NULL){
		perror("função: cria_casa");
		exit(EXIT_FAILURE);
	}

	strncpy(dado->cidade,cidade,64);
	dado->area = area;
	dado->quartos = quartos;
	dado->banheiros = banheiros;
	dado->garagens = garagens;


	return dado;

}

casa_t **ler_arquivo_csv(char *nome_arquivo, int *qtd_total){

	char linha[128];
	int contador = 0;

	int i = 0;

	char nome[64];
	int area;
	int quartos;
	int banheiros;
	int garagens;

	casa_t **meus_dados;

	FILE *fp;


	fp = fopen(nome_arquivo,"r");

	if (fp == NULL){
		perror("função: ler_arquivo_csv");
		exit(EXIT_FAILURE);
	}

	/* Conta as linhas */
	while (fgets(linha,128,fp) != NULL)
		contador++;

#ifdef DEBUG
	printf("Linhas: %d\n", contador);
#endif


	rewind(fp);
	/* Ignora primeira linha */
	fgets(linha,128,fp);
	contador--;

	meus_dados = malloc(sizeof(casa_t *) * contador);

	if (meus_dados == NULL){
		perror("função: ler_arquivo_csv");
		exit(EXIT_FAILURE);
	}

	while (fscanf(fp, "%63[^,],%d,%d,%d,%d", nome, &area,&quartos, &banheiros, &garagens) == 5){
#ifdef DEBUG
		printf("Lido: %s - %d \n", nome, area);
#endif

		meus_dados[i] = cria_casa(nome,area,quartos,banheiros,garagens);
		i++;
	}

	fclose(fp);

	*qtd_total = contador;
	return meus_dados;

}


float media_banheiros(casa_t ** casas, int qtd){

	int i;
	float media = 0;

	for (i=0; i < qtd; i++){
		media = media + casas[i]->banheiros;
	}

	return media / qtd;
}


void liberar_casa(casa_t ** casas, int qtd){
	int i;

	for (i=0; i < qtd; i++){
		free(casas[i]);
	}

	free(casas);
}




