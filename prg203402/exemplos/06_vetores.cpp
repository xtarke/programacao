/* Programa básico que exibe "olá mundo" */

/* Bibliotecas */
#include <iostream>

/* Namespace padrão */
using namespace std;

/* Função main: ponto de entrada */
int main() {

	int k;
	float a[3];

	// Vetor de float inicializado pelo usuario
	for (k = 0; k < 3; k = k + 1){
		cout << "Forneca um numero: ";
		cin >> a[k];
	}

	//Imprime todos os valores
	for (k = 0; k < 3; k = k + 1)
		cout << a[k] << endl;;

	return 0;
}
