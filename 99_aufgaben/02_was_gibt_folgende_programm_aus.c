

#include <stdio.h>

int main(void)
{

  int i  = 10;
  char c = 'c';

  printf("%d\n", i);        // Ausgabe:
  printf("%d\n", c);        // Ausgabe:
  printf("%d\n", (++i)+c);  // Ausgabe:


  printf("%c\n", c);        // Ausgabe:
  printf("%c\n", (++i)+c);  // Ausgabe:

  return 0;
}
