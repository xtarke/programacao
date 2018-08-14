#include <stdio.h>

void biscoito_foruna(char msg[])
{
    puts("---------------");
    puts("biscoito_foruna");
    puts("---------------");
    printf("Messagem 'e: %s\n" , msg);
    printf("Tamanho 'e: %i\n", sizeof(msg));
}

int main ()
{
  char quote[] = "Cookies engordam";
  
  
  printf("em main -> Tamanho 'e: %i\n", sizeof(quote));
  
  biscoito_foruna(quote);  
  
  return 0;
} 
