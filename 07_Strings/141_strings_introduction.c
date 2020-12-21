/**************************************************************
* 141_string_introduction.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-12-21
***************************************************************
* Grundlegendes Deklarieren und Initialisieren von Strings.
*
* Siehe Folie 141 im Skript
**************************************************************/


#include <stdio.h>



int main(void)
{
  char thi[] = {'F','H','I','\0'};
  thi[0]   = 'T'; // thi -> Gibt Adresse des ersten Elements wieder ->

  // Ausgabe des gesamten Strings
  printf("%s \n\n", thi);


  // Ausgabe Zeichen für Zeichen
  for(unsigned int i=0 ; i<10 ; ++i)
  {
    printf("%d. Zeichen %d \n", i+1, (int)(thi[i]));
  }

  return 0;
}
