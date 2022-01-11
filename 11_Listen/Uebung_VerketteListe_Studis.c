

#include <stdio.h>
#include <stdlib.h>   // necessary for malloc
#include <string.h>
#include <stdbool.h>

typedef char *  String;

typedef struct student{
    String name;
    unsigned int matNr;
    struct student *next;
} Student;

// Function protypes
bool contains(Student *list, Student *s);


Student *create_person(String name, char* matNr)
{
    if(!(strlen(matNr) == 6 ) )
    {
        printf("Ungueltige Matrikelnummer\n");
        Student *retVal = NULL;
        return retVal;
    }


    Student *s = malloc(sizeof(Student));

    s->name    = malloc(strlen(name)+1);
    strcpy(s->name, name);

    s->matNr   = atoi(matNr);
    s->next    = NULL;

    return s;
}

void print_single_student(Student *s)
{
    printf("*******************************\n");
    printf("Name: %s  (%06d)\n", s->name, s->matNr);
}

void print_list(Student *s)
{
    for( ; s != NULL ; s = s->next)
    {
        print_single_student(s);
    }

}

void push_front(Student *liste[], Student *s)
{
    // abfrage ob Student gültig ist
    if(s == NULL)
    {
        return;
    }

    if(!contains(*liste, s))
    {
        s->next = *liste;
        *liste  = s;
    }
    else
    {
        printf("Achtung: Student %s ist bereits in Liste enthalten\n", s->name);
    }
}

bool equals(Student *s1, Student *s2)
{
    if(s1->matNr == s2->matNr)
    {
        return true;
    }

    return false;
}


bool contains(Student *list, Student *s)
{
    while( list != NULL)
    {
        if( equals(list, s))
        {
            return true;
        }

        list = list->next;
    }
    return false;

}

void delete_student(Student **list, Student *s)
{
    if(!contains(*list, s))
    {
        printf("Eintrag nicht gefunden\n");
        return;
    }

    while(!equals(*list, s))
    {
        list = &(*list)->next;
    }

    s = *list;
    *list =(*list)->next;


    printf("Folgender Student wurde entfernt: \n");
    print_single_student(s);

    free(s);

}

int main(void)
{
    Student *liste = NULL;

    push_front(&liste, create_person("Tim",   "100001"));
    push_front(&liste, create_person("Peter", "002000"));
    push_front(&liste, create_person("Peter", "100001"));


    print_list(liste);

    delete_student(&liste, create_person("Peter", "005000"));

    return 0;
}
