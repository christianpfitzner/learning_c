/**************************************************************
* 86_rautenmuster.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-11-17
***************************************************************
* Dieses Programm fragt nach einer Zahl und bildet den
* Kehrwert. Bei einer Eingabe von 0 gibt das Programm die
* Anzahl aller eingegebenen Zahlen aus.
*
* Siehe Folie 83 im Skript
**************************************************************/

#include <stdio.h>
#define N 5
int main(void)
{
  char* zeichenkette;


  // Raute mit 2N-1 Zeilen und Spalten
  for (unsigned int z = 1; z <= N; z++)
  {
  printf("%*s", N - z, "");
  for (unsigned int s = 1; s < z * 2; s++)
  printf("*");
  printf("\n");
  }

//  for (unsigned int z = N - 1; z >= 1; z--)
//  {
//    printf("%*s", N - z, "");
//    for (unsigned int s = 1; s < z * 2; s++)
//      printf("*");
//    printf("\n");
//  }
  return 0;
}
