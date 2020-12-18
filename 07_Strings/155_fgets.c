
#include <stdio.h>


char ansi[256];         // ANSI-Tabelle

void init_ansi(void);   // intialisiert die ANSI-Tabelle

char *to_ansi(char *);  // codiert Umlaute als ANSI-Zeichen (wg. Windows)

int main(void)
{
  init_ansi();


  FILE *datei = fopen("Kafka.txt", "r");

  char zeile[100];


  if (!datei) // alternative: if(datei == NULL)
  {
    printf("Datei nicht gefunden");
  }
  else
  {
    while (fgets(zeile, 100, datei)) // NULL bei Dateiende
    {
      printf("%s", zeile);
    }
  }
  return 0;
}



void init_ansi(void)
{
  for (int i = 0; i < 256; i++)
  {
     ansi[i] = i;
  }

  ansi[(unsigned char) 'Ä'] = (unsigned char) 142;
  ansi[(unsigned char) 'Ö'] = (unsigned char) 153;
  ansi[(unsigned char) 'Ü'] = (unsigned char) 154;
  ansi[(unsigned char) 'ä'] = (unsigned char) 132;
  ansi[(unsigned char) 'ö'] = (unsigned char) 148;
  ansi[(unsigned char) 'ü'] = (unsigned char) 129;
  ansi[(unsigned char) 'ß'] = (unsigned char) 225;
}


char *to_ansi(char *s)
{
  for (int i = 0; s[i] != '\n'; i++)
  s[i] = ansi[(unsigned char) s[i]];
  return s;
}
