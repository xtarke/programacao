/* Programa básico que exibe "olá mundo" */

/* Bibliotecas */
#include <iostream>

/* Namespace padrão */
using namespace std;

/* Função main: ponto de entrada */
int main() {
	/* Variáveis */
	int r=-1;
	int s=1;
	int t=2;

	/* Simbolos de conversao
	Simbolo
	    !         negação
	   &&         and
	   ||         or */

	/* Operadores
	 >    maior
	 <    menor
	 <=   menor igual
	 >=   maior igual
	 ==   igual
	 !=   diferente */

	/* Letra a */
	bool a = (r+5)>t;
	cout << a << endl;

	/* Letra b */
	// (...)

	/* Letra c */
	bool c = (-r == s) && (s > r);
	cout << c << endl;

	return 0;
}
