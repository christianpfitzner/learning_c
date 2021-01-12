

#include <stdio.h>


typedef struct person {
    char *name;
    int alter;
    struct person *next;
} Person;


void ausgabe(Person *p);


int main(void)
{
    // Erzeugung der Listenelemente
    Person otto  = {"Otto" , 45};
    Person helga = {"Helga", 39};
    Person lisa  = {"Lisa" , 5};

    // Verkettung der Listenelemente
    otto .next = &helga;
    helga.next = &lisa ;
    lisa .next = NULL;

    // Erzeugung und Intialisierung des Ankers
    Person *liste = &otto;

    // Ausgabe der gesamten Liste
    printf("Ausgabe der Liste\n");
    ausgabe(liste);

}



void ausgabe(Person *p) {
    for (; p != NULL; p = p->next)
        printf("%s (%d)\n", p->name, p->alter);
}



