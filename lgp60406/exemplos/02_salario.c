/* Faça um programa para calcular o reajuste de um salário considerando que:
    - Se o salário for menor que 500, o reajuste é de 15% 
    - Se for maior ou igual a 500, mas menor que 1000, o reajuste é de 10%
    - Se for maior ou igual a 1000, é de 5% */


/* Bibliotecas */
#include <stdio.h>

int main(){

    float salario;
    float novo_salario;

    printf("Digite o salario:\n");
    scanf("%f", &salario);


    if (salario < 500)
        novo_salario = salario + salario * 0.15;
    else if ((salario >= 500) && (salario < 1000))
        novo_salario = salario + salario * 0.10;
    else
        novo_salario = salario + salario * 0.05;
    
    printf("Seu novo salário é %f\n", novo_salario);

    return 0;
}
    