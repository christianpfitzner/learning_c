/**************************************************************
* 83_loop_kehrwert.c
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

int main(void)
{
  int z = 1, i;


  for (i = 0; z != 0; i++)
  {
    printf("Zahl: "); scanf("%d", &z);
    if (z != 0)
    {
      printf("1/%d = %g\n", z, 1.0 / z);
    }
  }

  printf("Das waren %d Zahlen.\n", i - 1);

  return 0;
}
