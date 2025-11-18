/* Exemplos de funções em módulos  */


#include <iostream>
#include "07_funcoes_08.h"

using namespace std;


int main() {

	int numeros[] = {7, 8, 9, 10};

	/* Saída de dados e chamada das funções */
	cout << "Média é: " << media(numeros, 4) << endl;
	cout << "Máximo é: " << maximo(numeros, 4) << endl;

	return 0;
}
