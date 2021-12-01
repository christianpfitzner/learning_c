/**************************************************************
* 142_fgets.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-12-21
***************************************************************
* Grundlegendes Deklarieren und Initialisieren von Strings.
*
* Siehe Folie 142 im Skript
**************************************************************/

#include <stdio.h>


int main(void)
{
  // Eingabepuffer von 80 Zeichen inklusive \0
  char zeile[80];

  printf("Text: ");

  // parameters of the fgets function
  // str    − This is the pointer to an array of chars where the string read is stored.
  // n      − This is the maximum number of characters to be read (including the final null-character). Usually, the length of the array passed as str is used.
  // stream − This is the pointer to a FILE object that identifies the stream where characters are read from.
  fgets(zeile, 80, stdin);

//  for(unsigned int i=0 ; i<80 ; i++)
//    printf("%d: %d \n", i, zeile[i]);

  printf("1) >%s<\n", zeile);

  printf("Laenge ist %d Zeichen \n", strlen(zeile));

  // Entfernen von \n an der letzten Stelle des Strings
  zeile[strlen(zeile) - 1] = '\0';
  printf("2) >%s<", zeile);


  return 0;
}
