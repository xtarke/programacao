/* Exemplos de laços for: gerando um seno */

/* Bibliotecas */
#include <iostream>
#include <math.h>

/* Namespace padrão */
using namespace std;

/* Função main: ponto de entrada */
int main() {
	float tensao,freq,x,y;
	float pi = 3.1415926;

	cout << "Digite a frequência:" << endl;
	cin >> freq;
	cout << "Digite a tensão pico:" << endl;
	cin >> tensao;

	float intervalo = 1/freq;

	for (x=0; x < freq; x= x + intervalo){
		y =  tensao*sin(2*pi*x);
		cout << x << "\t" << y << endl;
	}

	return 0;
}
