/* Um caixa eletrônico realiza saques com notas de 100 reais, 50 reais, 
 * 20 reais, 10 reais e 5 reais. Escreva um programa em C que, dado o valor 
 * do saque, imprima na tela a quantidade de notas necessárias para se realizar 
 * o saque. Considere que o saque deve ser realizado com a menor quantidade de 
 * notas possível. */


#include <stdio.h>


/* Entrada de dados: variáveis passados por referência */
void obter_dados_de_entrada(char *nome, int nome_max, int *saque){
    
    /* Entrar com nome COMPLETO do cliente */
    
    
    /* Entrar valor do saque */
    
}


/* Retorna o numero de notas e atualiza o valor
 * remanescete do saque */
int notas_de_100(int *saque) {    
    /* Quantidade de notas */
    const int notas_100 = 8;
    
    int n_notas = *saque / 100;
    
    if (n_notas > notas_100)
        n_notas = 8;
    
    *saque = *saque - n_notas*100; 
    
    return n_notas;
}

int notas_de_50(int *saque) {
    /* Quantidade de notas */
    const int notas_50 = 12;
    
    
    
    //return 
}

/* Quantidade de notas p/ outras funções 
const int notas_50 = 12, notas_20 = 9;
const int notas_10 = 11, notas_5 = 20; */

int main(){
    char nome_cliente[20];
    int i, saque = 950;    
    /* Resultado do numero de notas:
     * resultado[0] é o numero de notas de 100
     * resultado[1] é o numero de notas de 50 ... */
    const int notas[5] = {100,50,20,10,5};
    int resultado[5] = {0,0,0,0,0};

    obter_dados_de_entrada(nome_cliente, 20, &saque);    
    
    resultado[0] = notas_de_100(&saque);
    printf("Valor restante: %i\n", saque);
    
    resultado[1] = notas_de_50(&saque);
    printf("Valor restante: %i\n", saque);
    
    
    
    
    
    /* Exemplo, modificar depois */
    //printf("Sr %s seu saque... )  
    for(i = 0; i < 5; i++)
        printf("notas de %i: %i\n", notas[i], resultado[i]);
   
} 
