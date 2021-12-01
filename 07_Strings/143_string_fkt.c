/**************************************************************
* 143_string_fkt.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2021-12-01
***************************************************************
* Grundlegendes Deklarieren und Initialisieren von Strings.
*
* Siehe Folie 143 im Skript
**************************************************************/

#include <stdio.h>
#include <string.h>


int main(void)
{
  // Eingabepuffer von 40 Zeichen inklusive \0
  const unsigned int max_char = 40;
  char eingabe[max_char ];

  printf("Text: ");
  fgets(eingabe, max_char , stdin);
  printf("Eingabe war %s\n", eingabe);


  // strlen
  unsigned int laenge = strlen(eingabe);
  printf("Laenge des Strings ist %d\n", laenge);


  // strcpy
  // kopiert einen String in einen anderen
  // Die Funktion beendet sich sobald ein \0-Zeichen vorkommt
  char string2[max_char];

  eingabe[5] = '\0';
  strcpy (string2, eingabe);

//  for(unsigned int i=0 ; i< max_char ; i++)
//      string2[i] = eingabe[i];


  printf("Nach dem kopieren: %s\n", string2);

  strcat (eingabe, string2);
  printf("Nach strcat: %s\n", eingabe);


  return 0;
}
