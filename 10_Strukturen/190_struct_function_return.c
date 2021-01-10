/**************************************************************
* 190_struct_function_argument.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-01-07
***************************************************************
* Beispiel zur Rückgabe einer Struktur von einer Funktion
*
* Siehe Folie 190 im Skript
**************************************************************/


#include <stdio.h>


struct punkt
{
  double x, y;
};


struct punkt add(const struct punkt p1, const struct punkt p2)
{
  const struct punkt p = {p1.x + p2.x, p1.y + p2.y};
  return p;
}

int main(void)
{
  const struct punkt a = {1.2, 3.4};
  const struct punkt b = {5.6, 7.8};

  const struct punkt c = add(a, b);

  printf("(%g, %g) + (%g, %g) = (%g, %g)", a.x,a.y, b.x,b.y, c.x,c.y);
  return 0;
}
