#include <stdio.h>



typedef struct
{
  int tag;
  int monat;
  int jahr;
} Geburtsdatum;

typedef struct
{
    int matnr;
    Geburtsdatum geb;
} Studi;

int main(void)
{
    Studi tim = {.matnr     = 1234,
                 .geb.tag   = 1,
                 .geb.monat = 10,
                 .geb.jahr  = 2000};

    printf("%d.%d.%d\n", tim.geb.tag,
                         tim.geb.monat,
                         tim.geb.jahr);
    return 0;
}
