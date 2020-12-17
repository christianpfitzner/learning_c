
#include <stdio.h>

int main(void)
{
  //int i; // Schleifenzähler oder Laufvariable



  for (int i = 1, j = 9; i < 10; i++, j--)
  {
    int k = 0;
    printf("%d + %d = %d\n", i, j, i + j);
    printf("%d", k);
    k++;
  }


  return 0;
}
