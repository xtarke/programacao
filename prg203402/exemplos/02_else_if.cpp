/* Programa básico que exibe "olá mundo" */

/* Bibliotecas */
#include <iostream>

/* Namespace padrão */
using namespace std;

/* Função main: ponto de entrada */
int main() {
	/* Variáveis */
	float temperatura;

	cout << "Digite a temperatura: ";
	cin >> temperatura;

	if (temperatura > 32){
		cout << "Esté quente lá fora." << endl;
	}
	else if (temperatura < 15){
		cout << "Está frio lá fora." << endl;
	}
	else {
		cout << "Está agradável!" << endl;
	}

	return 0;
}
