/* Programa básico que calcula a média de 4 números */

/* Bibliotecas */
#include <iostream>

/* Namespace padrão */
using namespace std;

/* Função main: ponto de entrada */
int main() {
	/* Variáveis */
	float n1,n2,n3,n4;
	float ma;

	/* Entrada de dados */
	cout << "Digite as notas: " << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;

	/* Processamento */
	ma = (n1 + n2 + n3 + n4)/4;

	/* Saída de dados */
	cout << "A média é: " << ma << endl;

	return 0;
}
