/**************************************************************
* uebungsaufgabe_3_1_4.c
***************************************************************
* author: Christian Pfitzner
* date: 2020-11-06
***************************************************************
* Dieses Programm zeigt die korrekte Zinsberechnung auf Basis
* des Datentyps double.
**************************************************************/


// Includes aller benoetigten Standard-C-Bibliotheken
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Deklaration und Initialisierung aller Variablen im Programm
    double kapital;        // Startkapital in EURO
    double jahre;          // Dauer der Anlage in Jahren
    double zins;           // Zinssatz in Prozent

    // Abfrage des Startkapitals
    printf("Geben Sie Ihr Startkapital an ");
    scanf("%lf", &kapital);

    // Abfrage der Dauer
    printf("Wie viele Jahre moechten Sie das Geld anlegen? ");
    scanf("%lf", &jahre);

    // Abfrage des Zinssatzes
    printf("Welchen Zinssatz erhalten Sie? ");
    scanf("%lf", &zins);

    //Berechnung (Fehlerhaft)
    printf("Kapital nach %lf Jahren ist %lf\n", kapital, kapital * pow((1 + zins / 100), jahre));

    return 0;
}
