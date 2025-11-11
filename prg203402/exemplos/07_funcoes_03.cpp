/* Exemplos de funções: sem parâmetros, laço for na chamada */

#include <iostream>
using namespace std;

void minha_funcao(){

	cout << "Olá, sou uma função." << endl;

}

int main() {
	int i;

	for (i=0; i < 5; i++){
		minha_funcao();
	}

	return 0;
}
