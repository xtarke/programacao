/* Exemplos de funções: sem parâmetros, laço for na chamada */

#include <stdio.h>

void minha_funcao(){

	printf("Olá, sou uma função.\n");

}

int main() {
	int i;

	for (i=0; i < 5; i++){
		minha_funcao();
	}

	return 0;
}
