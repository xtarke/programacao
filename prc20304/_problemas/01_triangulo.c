/************************************************
Desenvolva em C um programa que classifica triângulos baseando-se nas medidas do seus lados. Considere a seguinte especificação:

- Um triângulo é uma forma geométrica (polígono) composta por três lados, sendo que cada lado é menor que a soma dos outros dois lados.
- Um triângulo é isósceles quando possui dois lados iguais e um diferente.
- Um triângulo é escaleno quando possui todos os lados diferentes.
- Um triângulo equilátero quando possui todos os lados iguais.

Seu programa deve:

- Ler três valores para os lados de um triângulo: A, B e C;
- Verificar se os lados informados foram um triângulo. Caso contrário avise o usuário que os dados informados são inválidos.
- Se formam, classifique-o em isósceles, escaleno ou equilátero informando ao usuário.
************************************************/
#include <stdio.h>


int main(){
    float a,b,c;

    puts("Entre com os lados separados por espacos: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a <= b + c) && (b <= a + c) && (c <= a + b)){
        if((a == b && (a == c) && (b == c)))
            puts("O triangulo e' equilatero.");
        else if(a != b && a != c && b != c)
            puts("O triangulo e' escaleno.");
        else
            puts("O triangulo e' isosceles.");
        }
        else
            puts("Triangulo invlalido!");

    return 0;
} 
