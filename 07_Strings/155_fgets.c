
#include <stdio.h>


char ansi[256];         // ANSI-Tabelle



int main(void)
{

  FILE *datei  = fopen("Kafka.txt", "r");

  FILE *datei2 = fopen("output.txt", "a");

  char zeile[100];


  if (!datei) // alternative: if(datei == NULL)
  {
    printf("Datei nicht gefunden");
  }
  else
  {
    unsigned int i=1;
    while (fgets(zeile, 100, datei)) // NULL bei Dateiende
    {
      printf("%d: ", i);
      printf("%s", zeile);

      fputs(zeile, datei2);
    }
  }

  fclose(datei);
  fclose(datei2);
  return 0;
}
