
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Aufgabe 1: Eine Struktur (Student) soll den Namen von Studierenden und eine Matrikelnummer speichern
// Schreiben Sie eine Funktion, die auf dem Heap einen Pointer zurückgibt
// Mittels malloc muss die passende Größe alloziert werden.

// Aufgabe 2:
// Schreiben Sie eine Methode (printStudent), welche eine Struktur-Variable im Terminal ausdruckt
// Testen Sie die Funktion.

// Aufgabe 3:
// Schreiben Sie eine Methode (equals), welche überprüft ob zwei Studierende gleich sind.
// Testen Sie die Funktion.







typedef char * String;

typedef struct student{
  String name;
  int matrikelnr;
  struct student *next;
} Student;


Student *createStudent(String name, int nr)
{
  Student *s = malloc(sizeof(Student));

  s->name = malloc(strlen(name) + 1);
  strcpy(s ->name, name);

  s->matrikelnr = nr;
  s->next       = NULL;

  return s;
}


void printStudent(Student *s)
{
  printf("*************************\n");
  printf("Name:  %s\n", s->name);
  printf("Alter: %d\n", s->matrikelnr);
}


void printHochschule(Student *s)
{
  for( ; s != NULL ; s = s->next )
  {
    printStudent(s);
  }
}


bool equals(Student *s1, Student *s2)
{
  if(strcmp(s1->name, s2->name) == 0)
  {
    if(s1->matrikelnr == s2->matrikelnr)
    {
      return true;
    }
  }
  return false;
}


bool contains(Student *liste, Student *s)
{
  while(liste != NULL)
  {
    if(equals(liste, s))
    {
      return true;
    }
    liste = liste->next;
  }

  return false;
}



void push_front(Student **liste, Student *s)
{
  if(!contains(*liste, s))
  {
    s->next = *liste; // Next zeigt auf das bisher erste Element
    *liste   = s;      // Anfang der Liste ist das hier gesetzte Argument
  }
}


void push_back(Student **liste, Student *s)
{
  if(!contains(*liste, s))
  {
    while(*liste != NULL)
    {
      liste = &(*liste)->next;
    }
    *liste = s;
  }
}






int main(void)
{
  Student *anna = createStudent("Anna", 100000);
  Student *pete = createStudent("Pete", 100001);
  Student *emma = createStudent("Emma", 100002);

  Student *hochschule = NULL;

  push_front(&hochschule, anna);
  push_front(&hochschule, anna);
  push_front(&hochschule, anna);
  push_back( &hochschule, pete);
  push_back( &hochschule, emma);


  printHochschule(hochschule);





  return 0;
}
