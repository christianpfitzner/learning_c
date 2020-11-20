/**************************************************************
* if_schaltjahr.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-11-09
***************************************************************
* Dieses Programm gibt Ihnen aus, ob es sich um ein
* Schaltjahr handelt
*
* Siehe Folie 71 im Skript
**************************************************************/

#include <stdio.h>          // include for printf and scanf
#include <stdbool.h>        // include for bool


int main(void)
{
  // Abfrage nach Jahr von einem Benutzer
  unsigned int year = 0;
  printf("Dieses Programm ueberprueft, ob es sich um ein Schaltjahr handelt und gibt\n");
  printf("die Anzahl an Kalendertagen aus. \n\n");
  printf("Bitte geben Sie ein Jahr ein: ");
  scanf("%d", &year);


  // Anzahl an Tagen ermitteln und zuweisen:
  // Jedes vierte Jahr ist ein Schaltjahr. Auﬂgenommen sind
  // die Jahre, die ein neues Jahrhundert beginnen (1900, 1800 , ...),
  // allerdings sind auch Jahre, die durch 400 teilbar sind Schaltjahre.
  unsigned int days = 365;
  bool schaltjahr   = false;

  if (year%4 == 0 && year%100 != 0 || year%400 == 0)  // es handelt sich um ein Schaltjahr
  {
    days       = 366;
    schaltjahr = true;
  }
//  else                               // kein Schaltjahr
//  {
//    days       = 365;
//    schaltjahr = false;
//  }


 // Ausgabe an den Benutzer
  if(schaltjahr)
  {
     printf("Das Jahr %d ist ein Schaltjahr und hat %d Tage", year, days);
     bool blob = false;
  }
  else
  {
     printf("Das Jahr %d ist kein Schaltjahr und hat %d Tage", year, days);
  }


  return 0;
}
