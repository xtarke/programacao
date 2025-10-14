/* Exemplos de laços for */

/* Bibliotecas */
#include <iostream>

/* Namespace padrão */
using namespace std;

/* Função main: ponto de entrada */
int main() {
	int tabuada,i,calculo;

	cout << "Qual a tabuada? ";
	cin >> tabuada;

	for (i=0; i < 11; i++){
		calculo = i * tabuada;
		cout << calculo << endl;
	}

	return 0;
}
