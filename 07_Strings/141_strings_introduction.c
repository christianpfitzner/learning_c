


#include <stdio.h>



int main(void)
{
  char thi[] = {'F','H','I','\0'};
  thi[0]   = 'T'; // thi -> Gibt Adresse des ersten Elements wieder ->

  // Ausgabe des gesamten Strings
  printf("%s \n\n", thi);


  // Ausgabe Zeichen f�r Zeichen
  for(unsigned int i=0 ; i<10 ; ++i)
  {
    printf("%d. Zeichen %d \n", i+1, (int)(thi[i]));
  }

  return 0;
}
