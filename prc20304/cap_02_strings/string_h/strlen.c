#include <stdio.h>
#include <string.h>

int main ()
{
  char szInput[256];

  printf ("Entre com uma sentenca: ");
  fgets(szInput, 256, stdin);

  printf ("A sentenca tem %d catacteres.\n", (int)strlen(szInput));
  return 0;
}
