


#include <stdio.h>


typedef char * String;

struct person
{
  String name;
  int alter;
};


typedef struct person Person;
typedef Person * PersonPtr;


PersonPtr juengster_einwohner(PersonPtr liste[])
{
  // der Zeiger j zeigt auf das erste Listenelement
//  PersonPtr j = *liste;
  PersonPtr j = liste[0];

  // iterieren über alle Elemente in der Liste,
  // solange bis das Ende der Liste erreicht ist
  for (unsigned int i= 0 ; liste[i] != NULL ; i++)
  {
      // Wenn das Alter der neuen Person geringer ist,
      // speichere den Inhalt der jüngeren Person
      if ((liste[i])->alter < j->alter)
      {
        j = liste[i]; // Doch nicht!
      }
  }

  return j;
}



// Ist *liste in Z.22 die Adresse der ersten Person?
// Wieso schreibt man nicht Person *j = liste; ?


int main(void)
{
  Person otto  = {"Otto",  43};
  Person helga = {"Helga", 39};
  Person lisa  = {"Lisa",   5};

  // Listen sind in c Arrays mit Pointern auf Strukturen
  PersonPtr gemeinde[] = {&otto, &helga, &lisa, NULL};

  PersonPtr j          = juengster_einwohner(gemeinde);


  printf("Jüngster Einwohner: %s (%d)", j->name, j->alter);

  return 0;
}
