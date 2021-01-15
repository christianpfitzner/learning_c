// Aufgabe 1: Eine Struktur (Student) soll den Namen von Studierenden und eine Matrikelnummer speichern

// Aufgabe 2:
// Schreiben Sie eine Methode (printStudent), welche eine Struktur-Variable im Terminal ausdruckt
// Testen Sie die Funktion.

// Aufgabe 3:
// Schreiben Sie eine Methode (equals), welche überprüft ob zwei Studierende gleich sind.
// Testen Sie die Funktion.



//// Schreiben Sie eine Funktion, die auf dem Heap einen Pointer zurückgibt.
// Mittels malloc muss die passende Größe alloziert werden.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


typedef char * String;

// struct for students with name and matrikelnr
typedef struct student {
    String name;           // name of the student
    int matrikelnr;        // matrikelnumber
    struct student *next;  // pointer on the next element
} Student;


// Function to print the element of a student
// Ausgabe:
// "Name: STUDENTENNAME"
// "MatNr: 123456"
void printStudent( Student *s )
{
    printf("*************\n");
    printf("Name:  %s\n", s->name);
    printf("Matnr: %d\n", s->matrikelnr);
}


// Function to check weather two students are the same
// returns TRUE if they are the same
// returns FALSE if they are different
bool equals( Student *s1, Student *s2 ) // ==
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

Student bigger(Student s1, Student s2) // >
{
    if(s1.matrikelnr > s2.matrikelnr)
        return s1;
    else
        return s2;

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


void printHochschule(Student *s) // Folie 202
{
    for( ; s!= NULL ; s = s->next)
    {
        printStudent(s);
    }

}


// Method zum Erzeugen von Studierenden

Student *createStudent(String name, int nr)
{
    Student *s = malloc(sizeof(Student));

    s->name = malloc(strlen(name) + 1);
    strcpy(s->name, name);

    s->matrikelnr = nr;
    s->next = NULL;

    return s;
}

// Folie 205
void push_front(Student **liste, Student *s)
{
    // blocks adding an element, if it is already in the list
    if(!contains(*liste, s))
    {
        s->next = *liste;
        *liste  = s;
    }
}

void push_back(Student **liste, Student *s)
{


}

void delete_element(Student **liste, Student *s)
{


}




int main(void)
{
    Student *hochschule = NULL;

    push_front(&hochschule, createStudent("Peter", 100009) );
    push_front(&hochschule, createStudent("Anna",  100001) );
    push_front(&hochschule, createStudent("Bob",   100002) );
    push_front(&hochschule, createStudent("Anna",  100001) );
    push_front(&hochschule, createStudent("Bob",   100005) );

    printHochschule(hochschule);

    return 0;
}
