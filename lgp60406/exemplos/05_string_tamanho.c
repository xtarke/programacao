#include <stdio.h>
#include <string.h>

int main ()
{
  char buffer[256];

  printf ("Entre com uma frase: ");
  /* Com essa parâmetro, permite-se espaço */
  scanf("%255[^\n]", buffer);

  printf ("A frase tem %d catacteres.\n", strlen(buffer));
  return 0;
}

