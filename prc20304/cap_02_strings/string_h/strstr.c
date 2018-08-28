#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "Este eh um exemplo de string";
  char * pch;
  pch = strstr (str,"string");

  if (pch != NULL)
    puts (pch);

  return 0;
}
