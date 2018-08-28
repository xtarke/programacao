#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[]= "To be or not to be";
  char str2[40];
  char str3[40];

  /* copia de str1 pata str2: maximo de 40 caracteres */
  strncpy ( str2, str1, 40 );

  /* copia parcial (apenas 5 caracteres): */
  strncpy ( str3, str2, 5 );
  str3[5] = '\0';   /* Final de string adicionado manualmente */

  puts (str1);
  puts (str2);
  puts (str3);

  return 0;
}
