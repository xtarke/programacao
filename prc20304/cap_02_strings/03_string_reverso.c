#include <stdio.h>
#include <string.h>

/* Esta função imprime a string ao contrário.*/
void imprimir_reverso(char *string){
    
    int tamanho = strlen(string);    
    char *t = string + tamanho - 1;
    
    while (t >= string) {
        printf("%c", *t);
        
        t = t - 1;        
    }    
    puts("");
}

int main(){
    
    char s[] = "Este 'e um teste";
    
    imprimir_reverso(s);    
    
    return 0;
}
