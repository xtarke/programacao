/* Programa básico que exibe "olá mundo" */

/* Bibliotecas */
#include <iostream>

/* Namespace padrão */
using namespace std;

/* Função main: ponto de entrada */
int main() {

    int i = 0;
    int j = 0;

    int notas[10][3];

    for (i=0; i < 10; i++)
    {
        cout << "Aluno: " << i << endl;;
        for (j=0; j < 3; j++){
            cout << "Nota[" << j << "]: ";
            cin >> notas[j][i];
        }
    }
    return 0;

}
