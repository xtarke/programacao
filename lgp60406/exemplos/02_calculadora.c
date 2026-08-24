#include <stdio.h>

int main() {
    // Variáveis
    float num_a = 0;
    float num_b = 0;
    char operador = '+';
    float resultado = 0.0;

    // Entrada de dados
    printf("Digite operando a: ");
    scanf("%f", &num_a);
    
    printf("Digite operando b: ");
    scanf("%f", &num_b);
    
    printf("Digite operacao (+, -, *, /): ");
    // O espaço antes do %c é necessário no C para ignorar a quebra de linha (Enter) deixada pelo scanf anterior
    scanf(" %c", &operador); 

    // Depuração
    printf("%f\n", num_a);
    printf("%f\n", num_b);
    printf("%c\n", operador);

    // Condicionais
    if (operador == '+') {
        resultado = num_a + num_b;
    } else if (operador == '-') {
        resultado = num_a - num_b;
    } else if (operador == '*') {
        resultado = num_a * num_b;
    } else if (operador == '/' && num_b != 0) {
        // Conversão temporária (cast) para float garante que a divisão não descarte as casas decimais
        resultado = num_a / num_b; 
    } else {
        printf("Operador invalido\n");
    }
    
    // Imprime o resultado formatado
    printf("O resultado de %f %c %f e %f.\n", num_a, operador, num_b, resultado);

    return 0;
}