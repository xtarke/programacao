#include <stdio.h>

int main(){
    
    /* Variáveis */
    char nome[40], sobrenome[20],  nome_completo[40];
    int idade;
       
    /* scanf para string: maximo 39 + \0 caracteres */
    puts("Entre com seu nome: ");
    scanf("%39s", nome);   

    /* scanf para inteiros */
    puts("Entre com sua idade: ");
    scanf("%i", &idade);    
    
    /* scanf para variaveis separadas */
    puts("Entre com seu nome e sobrenome: ");
    scanf("%19s %19s", nome, sobrenome);    
    
    getchar();
    
    /* fgets para frases */
    puts("Entre com seu nome completo: ");
    fgets(nome_completo, sizeof(nome_completo), stdin);
    
    printf("Seu nome 'e %s %s (%s) com %i anos\n", nome, sobrenome, nome_completo, idade);
        
    return 0;
}
    
    
    
