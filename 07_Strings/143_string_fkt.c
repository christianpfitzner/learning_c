

#include <stdio.h>
#include <string.h>


int main(void)
{
  // Eingabepuffer von 80 Zeichen inklusive \0
  const unsigned int max_char = 40;
  char eingabe[max_char ];
  printf("Text: ");
  fgets(eingabe, max_char , stdin);


  printf("Eingabe war %\n", eingabe);


  // strlen
  unsigned int laenge = strlen(eingabe);
  printf("Laenge des Strings ist %d\n", laenge);


  // strcpy
  // kopiert einen String in einen anderen
  // Die Funktion beendet sich sobald ein \0-Zeichen vorkommt
  char string2[max_char];
  strcpy (string2, eingabe);
  printf("Nach dem kopieren: %s\n", string2);

  strcat (eingabe, string2);
  printf("Nach strcat: %s\n", eingabe);


  return 0;
}
