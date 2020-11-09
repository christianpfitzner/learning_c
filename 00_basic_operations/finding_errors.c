

// Achtung: Das folgende Programm kann nicht übersetzt werden
//          Finden Sie die Fehler und korrigieren Sie den
//          Quellcode.



#include <stdio.h>

#define _USE_MATH_DEFINES // for C
#include <math.h>



int main(void)
{


  // calculating the cosinus of pi in rad
  const double cos_of_a = cos(M_PI);

  printf("Ergebnis: %.30f\n", M_PI);



  int b = 10;
  {
      int b = 20;
      printf("%d\n", b);
  }

  printf("%d\n", b);

  return 0;

}
