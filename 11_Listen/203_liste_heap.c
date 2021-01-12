/**************************************************************
* 203_listen_heap.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-01-12
***************************************************************
* Einführendes Beispiel zu verketteten Listen in c.
*
* Siehe Folie 203 im Skript
**************************************************************/

#include <stdio.h>
#include <string.h> // strlen
#include <stdlib.h> // malloc

typedef struct person {
    char *name;
    int alter;
    struct person *next;
} Person;


const unsigned int MAX = 20;

// Ausgabe einer einfach verketteten Listeq
void ausgabe(Person *p);

// Die Funktion neue_person erzeugt eine neue Person
// auf dem Heap und intialisiert sie mit den
// übergebenen Argumenten
Person *neue_person(char *name, int alter);

// Die Funktion add_first fügt eine neue Person am Listenanfang ein
void add_first(Person **l, Person *p);

// Die Funktion add_last fügt eine neue Person am Listenende ein
void add_last(Person **l, Person *p) ;



int main(void)
{
    Person *liste = NULL; // leere Liste
    while (1)
    {
        char name[MAX];
        int alter;

        printf("Name: ");
        scanf("%s", name);

        printf("Alter: ");
        scanf("%d", &alter);
        printf("\n");

        if (alter == 0)
        {
            break;
        }

        add_first(&liste, neue_person(name, alter));
    }
    ausgabe(liste);

}


Person *neue_person(char *name, int alter)
{
    Person *p = malloc(sizeof(Person));
    p->name   = malloc(strlen(name) + 1); // warum +1 ?

    strcpy(p->name, name);

    p->alter = alter;
    p->next  = NULL;

    return p;
}


void add_first(Person **l, Person *p)
{
    p->next = *l;   // neue Person auf alte Liste zeigen lassen
    *l = p;         // Anker auf neue Person zeigen lassen
}


void add_last(Person **l, Person *p)
{
    while (*l != NULL)
    {
        l = &(*l)->next; // von Anker zu Anker wandern
    }

    *l = p; // letzten Anker auf neue Person zeigen lassen
}

void ausgabe(Person *p) {
    for (; p != NULL; p = p->next)
    {
        printf("%s (%d)\n", p->name, p->alter);
    }
}






