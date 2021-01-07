

#include <stdio.h>
#include <string.h>


typedef char * String;


int main(void)
{
  String vorname  = "Tim";
  String nachname = "Meier";
  int alter       = 21;


  char person[80];

  // Zusammensetzen eines Strings
  sprintf(person, "%s, %.1s (%d0 - %d9)", nachname, vorname, alter / 10, alter / 10);

  // Ausgabe eines Strings
  printf("%s", person);

  return 0;
}
