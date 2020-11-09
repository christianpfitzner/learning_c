/**************************************************************
* switch_kalendertage.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-11-09
***************************************************************
* Dieses Programm gibt Ihnen aus, ob es sich um ein
* Schaltjahr handelt
*
* Siehe Folie 79 im Skript
**************************************************************/

#include <stdio.h>          // include for printf and scanf
#include <stdbool.h>        // include for bool


int main(void)
{
  // Abfrage nach Jahr von einem Benutzer
  unsigned int month= 0;
  printf("Dieses Programm zeigt Ihnen an, wie viele Tage ein Monat hat. \n");
  printf("Bitte geben Sie den Monat als Zahl an (1 - 12): ");
  scanf("%d", &month);

  unsigned int days;
  switch (month) {
    case 1: case 3: case 5: case 7:
    case 8: case 10: case 12:        days = 31; break;
    case 4: case 6: case 9: case 11: days = 30; break;
    case 2:                          days = 28; break;
    default: printf("%d? Es gibt nur 12 Monate!", month); break;
  }

  printf("Der Monat %d hat %d Tage", month, days);

  return 0;
}
