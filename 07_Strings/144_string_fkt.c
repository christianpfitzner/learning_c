

#include <stdio.h>
#include <string.h>



int main(void)
{
  char string1[50];
  char string2[50];

  printf("Eingabe 1. String: ");
  fgets(string1, 50, stdin);
  printf("\nEingabe 2. String: ");
  fgets(string2, 50, stdin);


  unsigned int unterschiede = strcmp (string1, string2);

  printf("Die Beiden Strings unterscheiden sich in %d Zeichen\n", unterschiede);


  return 0;
}
