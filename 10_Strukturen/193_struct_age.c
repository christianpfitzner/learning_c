


#include <stdio.h>


struct person
{
  char *name;
  int alter;
};


typedef struct person Person;


Person *juengster_einwohner(Person **liste)
{
  Person *j = *liste; // der Zeiger j zeigt auf das erste Listenelement


  // iterieren �ber alle Elemente in der Liste,
  // solange bis das Ende der Liste erreicht ist
  for ( ; *liste != NULL ; liste++)
  {
      // Wenn das Alter der neuen Person geringer ist,
      // speichere den Inhalt der j�ngeren Person
      if ((*liste)->alter < j->alter)
      {
        j = *liste; // Doch nicht!
      }
  }

  return j;
}


int main(void)
{
  Person otto  = {"Otto",  43};
  Person helga = {"Helga", 39};
  Person lisa  = {"Lisa",   5};

  Person *gemeinde[] = {&otto, &helga, &lisa, NULL};

  Person  *j         = juengster_einwohner(gemeinde);


  printf("J�ngster Einwohner: %s (%d)", j->name, j->alter);

  return 0;
}
