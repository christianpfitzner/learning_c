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
typedef struct person {
    char *name;
    int   alter;
    struct person *next;
} Person;

// Funktion zum Ausgeben einer Liste mit Elementen von Personen
void ausgabe(Person *p);

// Ist es auch wieder möglich liste[0] statt *liste bei der Initialisierung
// des Ankers zu schreiben?
int main(void)
{
    // Erzeugung der Listenelemente
    Person otto  = {"Otto" , 45};
    Person helga = {"Helga", 39};
    Person lisa  = {"Lisa" , 5};
    Person kerstin= {"Kerstin", 11};

    // Verkettung der Listenelemente
    otto .next = &helga;
    helga.next = &lisa ;
    lisa .next = &kerstin;
    kerstin.next = NULL;

    // Erzeugung und Intialisierung des Ankers
    Person *liste = &otto;

    // Ausgabe der gesamten Liste
    printf("Ausgabe der Liste\n");
    ausgabe(liste);
}
void ausgabe(Person *p)
{
    for (; p != NULL; p = p->next)
    {
        printf("%s (%d)\n", p->name, p->alter);
    }
}



