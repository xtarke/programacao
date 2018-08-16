/* ungetc example */
#include <stdio.h>

int main ()
{
    char key;
  
    
    while (key != 'q'){
        
        /* Lê um caracter da entrada padrao */
        key = getchar();
        
        /* Se 'a', coloca '4' no lugar */
        if (key == 'a')
            ungetc('4', stdin);
        
        printf("%c\n", key);            
    }     
}
