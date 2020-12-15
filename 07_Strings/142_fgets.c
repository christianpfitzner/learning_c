


#include <stdio.h>


int main(void)
{

  // Eingabepuffer von 80 Zeichen inklusive \0
  char zeile[80];
  printf("Text: ");
  fgets(zeile, 80, stdin);
  printf("1) >%s<\n", zeile);

  zeile[strlen(zeile) - 1] = '\0';
  printf("2) >%s<", zeile);


  return 0;
}
