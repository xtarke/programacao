/* Exemplos de funções: parâmetro com string */


#include <iostream>
using namespace std;

void nacionalidade(string pais){
	cout << "Eu sou do " << pais << endl;
}

int main() {


	nacionalidade("Marrocos");
	nacionalidade("Brasil");
	nacionalidade("Japão");

	return 0;
}
