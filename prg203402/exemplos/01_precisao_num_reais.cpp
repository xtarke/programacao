/* Configuração da precisão do cout  */

/* Bibliotecas */
#include <iostream>
#include <iomanip>

/* Namespace padrão */
using namespace std;

/* Função main: ponto de entrada */
int main() {

	float numero;

	cout << "Digite um número: ";
	cin >> numero;

	/* Altera a exibição do cout para 2 casa decimais */
	cout << fixed;
	cout << setprecision(2);

	/* Exibe número divido por 3 */
	cout << numero / 3.0 << endl;


	return 0;
}
