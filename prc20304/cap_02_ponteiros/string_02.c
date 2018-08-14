#include <stdio.h>

int tamanho_string(char msg[])
{
    int i;
    
    // for(...
    
    
    return i;
}

int main ()
{
    char minha_string[64];
    
    puts("Digite uma string: ");
    scanf("%63s", minha_string);
    
    printf("Tamanho com sizeof: %i\n", sizeof(minha_string));
    printf("Tamanho com minha funcao: %i\n", tamanho_string(minha_string));
    
    return 0;
}
