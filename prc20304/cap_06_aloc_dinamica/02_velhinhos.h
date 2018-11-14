#ifndef VELHINHOS_H_INCLUDED
#define VELHINHOS_H_INCLUDED


typedef struct dados {
	char *nome;
	int idade;
	char sexo;
} dado_t;


dado_t * ler_arquivo(char *nome_arquivo, int *qtd_dados);


#endif //VELHINHOS_H_INCLUDED
