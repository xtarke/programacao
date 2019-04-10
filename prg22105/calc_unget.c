/*
 ============================================================================
 Name        : stack-calc.c
 Author      : Renan Augusto Starke
 Version     :
 Copyright   : Renan, todos os direitos reservados
 Description : Calculadora a pós-fixada: baseado no exemplo de Estruturas
 	 	 	 	 de dados: Celes_Rangel  
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char c;
	float v;

	do {
		/* le proximo caractere nao branco */
		scanf(" %c",&c);

		/* verifica se e' operador valido */
		if (c=='+' || c=='-' || c=='*' || c=='/') {
			printf("\t%c\n", c);
		}

		/* devolve caractere lido e tenta ler número */
		else {
			ungetc(c,stdin);

			if (scanf("%f",&v) == 1){
				printf("\t%f\n", v);
			}
		}
		getchar();

	} while (c!='q');

	return EXIT_SUCCESS;
}
