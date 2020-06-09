/*
 * casas.h
 *
 *  Created on: Apr 11, 2020
 *      Author: Renan
 */

#ifndef CASAS_H_
#define CASAS_H_

typedef struct casas casa_t;


casa_t *cria_casa (char *cidade, int area, int quartos, int banheiros, int garagens);
casa_t **ler_arquivo_csv(char *nome_arquivo, int *qtd_total);
void liberar_casa(casa_t ** casas, int qtd);


char *obter_nome(casa_t * casa);
int obter_area(casa_t * casa);


float media_banheiros(casa_t ** casas, int qtd);

#endif /* CASAS_H_ */
