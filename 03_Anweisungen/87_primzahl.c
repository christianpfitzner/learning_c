/**************************************************************
* 87_primzahl.c
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

// Sind die Zahlen ab p Primzahlen?
int main(void)
{
  long long p    = 1000000000000000001; // 1 Trillion + 1
  long long ende = p + 200;

  do
  {
    long long t = 2; // Anfangsteiler
    printf("p: %lld\n", p);
    while (p >= t * t && p % t != 0) // Test auf Teilbarkeit
      t = t == 2 ? 3 : t + 2; // nächster Teiler

      printf("%lld ", t);

      if (p < t * t)
        printf("%lld\n", p);

      p += 2;

  } while (p <= ende);

  // Beenden des Programms
  return 0;
}
