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
#include <string.h>         // strlen
#include <stdlib.h>         // malloc
#include <stdbool.h>        // Boolean

typedef struct person
{
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

//Die Funktion add_in_order fügt eine Person an der "richtigen" Stelle in der Liste ein
void add_in_order(Person **l, Person *p);

// Entfernen einer Person aus der Liste
void delete(Person **l, Person *p);

// Funktion überprüft, ob zwei Personen gleich sind.
bool equals(Person *a, Person *b);

// Funktion überprüft, ob ein Element schon in der Liste eingetragen ist
bool contains(Person *liste, Person *p);






void add_person_to_list(Person *liste[], char *name, int alter)
{
    add_first(liste, neue_person(name, alter));
}






int main(void)
{
    Person *liste = NULL; // leere Liste

    add_person_to_list(&liste, "Bob", 22);

    add_first(&liste, neue_person("Peter", 21));
    add_first(&liste, neue_person("Anna",  22));
    add_first(&liste, neue_person("Micha", 23));
    add_first(&liste, neue_person("Anne",  24));
    add_first(&liste, neue_person("Anne",  24));
    add_first(&liste, neue_person("Anne",  24));
    add_first(&liste, neue_person("Anne",  24));
    add_first(&liste, neue_person("Anne",  24));
    add_first(&liste, neue_person("Anne",  24));
    add_first(&liste, neue_person("Anne",  24));
    add_first(&liste, neue_person("Anne",  24));


    delete(&liste, neue_person("Anne",  24));

//    Person *anne = neue_person("Anne",  24);
//    if(contains(liste, anne))
//    {
//       add_last( &liste, anne );
//    }

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
    if(!contains(*l,p))
    {
        p->next = *l;   // neue Person auf alte Liste zeigen lassen
        *l = p;         // Anker auf neue Person zeigen lassen
    }
}











void add_last(Person **l, Person *p)
{
    if(!contains(*l,p))
    {
        while (*l != NULL)
        {
            l = &(*l)->next; // von Anker zu Anker wandern
        }

        *l = p; // letzten Anker auf neue Person zeigen lassen
    }
}










void ausgabe(Person *p)
{
    for (; p != NULL; p = p->next)
    {
        printf("%s (%d)\n", p->name, p->alter);
    }
}










void add_in_order(Person **l, Person *p)
{
    while (*l != NULL && strcmp((*l)->name, p->name) < 0)
    {
        l = &(*l)->next;
    }

    p->next = *l;
    *l = p;
}










bool equals(Person *a, Person *b)
{
    // Überprüft ob Alter und Name gleich sind
    return strcmp(a->name, b->name) == 0 && a->alter == b->alter;
}










bool contains(Person *liste, Person *p)
{
    // solange die Liste durchgehen bis das Listenende erreicht ist
    // oder das Element in der Liste gefunden wurde
    while (liste != NULL && !equals(liste, p))
    {
        liste = liste->next;
    }
    return liste != NULL;
}










void delete(Person **l, Person *p)
{
    while (*l != NULL && !equals(*l, p))
    {
        l = &(*l)->next;
    }
    if (*l != NULL)
    {
        p = *l;
        *l = (*l)->next;
        free(p);
    }
}





