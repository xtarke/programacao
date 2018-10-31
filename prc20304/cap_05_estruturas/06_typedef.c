#include <stdio.h>

/* cria um "sinônimo" para unsigned char */
typedef unsigned char byte;
  
int main(void)
{
    byte b1, b2;
    
    b1 = 2;
    b2 = 0x21;
    
    printf("Valores: %i %i\n", b1, b2);
 
 
 
 
 
}
