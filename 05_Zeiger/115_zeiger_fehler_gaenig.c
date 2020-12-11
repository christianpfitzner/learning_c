/**************************************************************
* 115_zeiger_fehler.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-12-08
***************************************************************
*
* Siehe Folie 115 im Skript
**************************************************************/


#include <stdio.h>


int zahl_einlesen_by_value(void)
{
   int input = 0;
   printf("\nGeben Sie eine Zahl ein: ");
   scanf("%d", &input);

   return input;
}


void zahl_einlesen_by_reference(int *input)
{
    printf("\nGeben Sie eine Zahl ein: ");
    scanf("%d", input);
}


int *zahl_einlesen_return_reference(void)
{
    int input = 0;
    printf("\nGeben Sie eine Zahl ein: ");
    scanf("%d", &input);
    printf("Adresse %p", &input);

    return &input;
}

int zahl_einlesen_return_reference2(int *i)
{
    printf("\nGeben Sie eine Zahl ein: ");
    scanf("%d", i); // bei Pointer und scanf kein Adressoperator (&) notwendig
    printf("Adresse %p", i);

    return *i;
}


// Obacht bei Zeigern auf lokale Variablen



int main(void)
{
    printf("Dieses Programm liest drei Zahlen mittels einer Funktion ein\n");

    // Aufruf mit call by value
    const int input1 = zahl_einlesen_by_value();
    printf("Eingegebene Zahl: %d", input1);

    // Korrekter Aufruf mit call_by_reference
    // Die Variable würd außerhalb der Funktion
    // angelegt und innerhalb des Funktions-
    // aufrufs verändert.
    int input2 = 0;
    zahl_einlesen_by_reference(&input2);
    printf("Eingegebene Zahl: %d", input2);


    int input_for_ref = 0;
    int *ptr = zahl_einlesen_return_reference2(&input_for_ref);
    printf("Eingegebene Zahl: %d", *ptr);

    // Fehlerhafter Aufruf !!!
    // Was passiert: Es wird ein Zeiger auf eine
    // lokale Variable in der Funktion zurückgegeben.
    // Allerdings wird der Speicher nach Beenden
    // der Funktion wieder freigegeben.
//    int *input3 = zahl_einlesen_return_reference();
//    printf("Adresse %p", input3);
//    printf("Eingegebene Zahl: %d", *input3);


    return 0;
}
