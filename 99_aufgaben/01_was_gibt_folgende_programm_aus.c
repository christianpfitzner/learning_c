

#include <stdio.h>

int main(void)
{

  float f  = 3.14000;
  int   i  = f;

  printf("%f\n", f);        // Ausgabe:
  printf("%d\n", i);        // Ausgabe:

  printf("%d\n", (int)f+i++); // Ausgabe:

  printf("%d\n", i%2);  // Ausgabe:

  printf("%d\n", i>f);  // Ausgabe:

  return 0;
}
