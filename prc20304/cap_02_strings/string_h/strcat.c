#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[20];
  char str2[20];

  strncpy (str1,"Ser ", 20);
  strncpy (str2,"ou nao ser", 20);
  strncat (str1, str2, 6);

  puts (str1);

  return 0;
}
