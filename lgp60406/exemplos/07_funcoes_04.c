/* Exemplos de funções: parâmetro com string */


#include <stdio.h>

void nacionalidade(char *pais){
	printf("Eu sou do %s\n", pais);
}

int main() {


	nacionalidade("Marrocos");
	nacionalidade("Brasil");
	nacionalidade("Japão");

	return 0;
}
