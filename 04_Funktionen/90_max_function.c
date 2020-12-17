/**************************************************************
* 90_max_function.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-11-17
***************************************************************
* Dieses Programm nutzt eine selbst definierte Funktion, welche
* immer die größte zweier Zahlen zurückgibt
*
* Siehe Folie 83 im Skript
**************************************************************/
#include <stdio.h>


int max(int a, int b) { // a und b sind die Parameter der Funktion
  return a >= b ? a : b;
}


// alternative Schreibweise
int max2(int a, int b)
{
  if(a >= b)
    return a;
  else
    return b;
}


int main(void) +
{
  int x = 47, y = 11;
  printf("%2d\n", max(x - y, y - x));
  printf("%2d\n", max(x / y, x % y));
  return 0;
}
