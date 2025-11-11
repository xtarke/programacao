/* Exemplos de funções: parâmetro com string */


#include <iostream>
using namespace std;

int quintuplo(int x){
	int valor;

	valor = x * 5;

	return valor;
}

int main() {

	cout << quintuplo(14) << endl;
	cout << quintuplo(2) << endl;
	cout << quintuplo(8) << endl;

	return 0;
}
