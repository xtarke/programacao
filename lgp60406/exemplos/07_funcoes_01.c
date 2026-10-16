/* Exemplos de funções: parâmetro int  */

#include <stdio.h>


void imprimi_dobro_funcao(int x){

	printf("Dobro: %d\n", 2 * x);

}

int main() {

	imprimi_dobro_funcao(6);
	imprimi_dobro_funcao(7);
	imprimi_dobro_funcao(25);


	return 0;
}
