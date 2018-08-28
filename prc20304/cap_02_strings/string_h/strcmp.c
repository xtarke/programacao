#include <stdio.h>
#include <string.h>

int main ()
{
  char key[] = "laranja";
  char buffer[80];

  do {
     printf ("Adivinhe minha fruta predileta? ");

     scanf ("%79s",buffer);

  } while (strcmp (key,buffer) != 0);

  puts ("Resposta correta!");
  return 0;
}
