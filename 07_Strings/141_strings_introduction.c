


#include <stdio.h>



int main(void)
{
  char thi[10] = "FHI";
  *thi = 'T';

  // Ausgabe des gesamten Strings
  printf("%s \n\n", thi);


  // Ausgabe Zeichen für Zeichen
  for(unsigned int i=0 ; i<10 ; ++i)
  {
    printf("%d. Zeichen %c \n", i+1, thi[i]);
  }

  return 0;
}
