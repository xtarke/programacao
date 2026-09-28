#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "Este é um exemplo de string";
  char *pch;
  pch = strstr(str,"exemplo");

  if (pch != NULL)
    printf("Encontrei: %s.\n", pch);

  return 0;
}
