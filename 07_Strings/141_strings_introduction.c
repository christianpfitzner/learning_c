


#include <stdio.h>



int main(void)
{
  char thi[] = "FHI";
  *thi = 'T';

  // Ausgabe des gesamten Strings
  printf("%s \n\n", thi);


  // Ausgabe Zeichen für Zeichen
  for(unsigned int i=0 ; i<3 ; ++i)
  {
    printf("%d. Zeichen %c \n", i+1, thi[i]);
  }

  return 0;
}
