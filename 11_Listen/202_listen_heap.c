/**************************************************************
* 200_listen_intro.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-01-12
***************************************************************
* Einführendes Beispiel zu verketteten Listen in c
*
* Siehe Folie 200 im Skript
**************************************************************/



#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h>


const unsigned int MAX = 50;

typedef char * String;

typedef struct person {
    String name;
    int   alter;
    struct person *next;
} Person;


// Funktion zum Ausgeben einer Liste mit Elementen von Personen
void ausgabe(Person *p);


// "Art von Konstruktor"
Person *neue_person(String name, int alter)
{
    Person *p = malloc(sizeof(Person));

//    printf("Size of liefert: %d", sizeof(Person));

    p->next  = NULL;
    p->alter = alter;
    p->name  = malloc(strlen(name) + 1);
    strcpy(p->name, name);

    return p;
}

// Fügt ein Element am Anfang einer Liste ein
void add_first(Person *liste[], Person *p)
{
    p->next = *liste;
    *liste  = p;
}


void add_last(Person *liste[], Person *p)
{
    while (*liste != NULL)
    {
        printf("%p", (*liste)->next);
        liste = &((*liste)->next);
    }
    *liste = p;
}

void add_ascending_age(Person **l, Person *p)
{
    while (*l != NULL && (*l)->alter < p->alter)
    {
        l = &(*l)->next;
    }

    p->next = *l;
    *l = p;
}

int main(void)
{
    Person *liste = NULL;  // Liste ohne Inhalt

    while (1)
    {
        char name[MAX];
        int alter = 0;

        printf("Name: ");
        scanf("%s", name);

        printf("Alter: ");
        scanf("%d", &alter);

        printf("\n");

        if (alter == 0)
            break;


//        add_last(&liste, neue_person(name, alter));
        add_ascending_age(&liste, neue_person(name, alter));
//        printf("aktuelle Liste\n");
//        printf("**********************\n");
    }
    ausgabe(liste);



}



void ausgabe(Person *p)
{
    for (; p != NULL; p = p->next)
    {
        printf("%s (%d)\n", p->name, p->alter);
    }
}



