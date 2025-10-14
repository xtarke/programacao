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
	int contador = 0;

	while (contador < 2) {
		/* Entrada de dados */
		cout << "Digite as notas: ";
		cin >> n1;
		cin >> n2;
		cin >> n3;
		cin >> n4;

		/* Processamento */
		ma = (n1 + n2 + n3 + n4)/4;

		if (ma < 6) {
			/* Saída de dados */
			cout << "Em recuperação." << endl;
		}
		else {
			cout << "Aprovado." << endl;
		}
		contador++; //contador = contador + 1;
	}
	return 0;
}
