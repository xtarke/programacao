/* Exemplos de laços for */

/* Bibliotecas */
#include <iostream>

/* Namespace padrão */
using namespace std;

/* Função main: ponto de entrada */
int main() {
	int i;

	// Para uma sequência de 5 números: [0,5]
	for (i = 0; i < 6; i++) {
		cout << i << endl;
	}
	cout << "-------" << endl;
	//Pode começar em 2 até 10, mas 10 não é incluso
	//Intervalo [2,10[
	for (i = 2; i < 10; i++){
		cout << i << endl;
	}
	cout << "-------" << endl;

	// Para mudar o intervalo de incremento
	// Intervalo [2,30[
	// com incremento de 3
	for (i = 2; i < 30; i = i + 3){
		cout << i << endl;
	}

	return 0;
}
