


#include <stdio.h>


int main(void)
{
  // Eingabepuffer von 80 Zeichen inklusive \0
  char zeile[80];

  printf("Text: ");


  fgets(zeile, 80, stdin);

//  for(unsigned int i=0 ; i<80 ; i++)
//    printf("%d: %d \n", i, zeile[i]);

  printf("1) >%s<\n", zeile);

  printf("Laenge ist %d Zeichen \n", strlen(zeile));

  // Entfernen von \n an der letzten Stelle des Strings
  zeile[strlen(zeile) - 1] = '\0';
  printf("2) >%s<", zeile);


  return 0;
}
