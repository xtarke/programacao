#include <stdio.h>
#include <string.h>

int main(){
    
    /* Busca estática */
    char s0[] = "daysfuntional";
    char s1[] = "fun";
    
    if (strstr(s0,s1))
        printf("Encontrado %s em %s\n", s1, s0);
    
    
    /* Busca com entrada de dados */
    char s2[] = "Este é um teste de string";    
    char s3[16];
    
    puts("Digite a string:");
    fgets(s3,16,stdin);
//    scanf("%15s", s3);

	s3[strlen(s3)-1] = 0;
	puts(s3);
    
    if (strstr(s2, s3))
        printf("Encontrado %s em %s\n", s3, s2);
    
    
    return 0;    
}
