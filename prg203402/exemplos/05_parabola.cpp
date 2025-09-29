/* Exemplos de laços for: gerando um parábola */

/* Bibliotecas */
#include <iostream>

/* Namespace padrão */
using namespace std;

/* Função main: ponto de entrada */
int main() {
	float x,y;

	for (x=-10; x < 11; x= x + 0.5){
		y =  x*x + x*x -9*x + 2;
		cout << x << "\t" << y << endl;
	}

	return 0;
}
