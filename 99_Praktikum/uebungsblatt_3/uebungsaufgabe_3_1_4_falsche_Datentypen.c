/**************************************************************
* uebungsaufgabe_3_1_4_falscher_Datentyp.c
***************************************************************
* author: Christian Pfitzner
* date: 2020-11-06
***************************************************************
* Dieses Programm zeigt einen gaengigen Fehler bei der
* Uebungsaufgabe 4 der ersten Aufgabe auf dem 3. Uebungsblatt.
* Durch einen falsch gewählten Datentypen ergibt sich eine
* fehlerhafte Berechnung des Kapitalertrags.
**************************************************************/



//
// Achtung: Das folgende Beispiel compiliert und lässt sich problemlos ausfuehren.
//          Allerdings ist die Berechnung fehlerhaft durch falsch ausgewaehlte
//          Datentypen.
//


// Includes aller benoetigten Standard-C-Bibliotheken
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Deklaration und Initialisierung aller Variablen im Programm
    int kapital;        // Startkapital in EURO
    int jahre;          // Dauer der Anlage in Jahren
    int zins;           // Zinssatz in Prozent

    // Abfrage des Startkapitals
    printf("Geben Sie Ihr Startkapital an ");
    scanf("%d", &kapital);

    // Abfrage der Dauer
    printf("Wie viele Jahre moechten Sie das Geld anlegen? ");
    scanf("%d", &jahre);

    // Abfrage des Zinssatzes
    printf("Welchen Zinssatz erhalten Sie? ");
    scanf("%d", &zins);

    //Berechnung (Fehlerhaft)
    printf("Kapital nach %d Jahren ist %d\n", kapital, kapital * pow((1 + zins / 100), jahre));

    // Beschreibung des Fehlers:
    // Die Divison von zins und 100 scheint erstmal korrekt. Bedingt dadurch beide Variablen
    // vom typ int sind, ergibt sich wieder eine int Zahl dieser Zwischenrechnung. Bei einem
    // beispielhaften Zinssatz von 2 Prozent sollte sich daher 0,02 Ergeben. Int führt dazu
    // dass das Ergebnis als 0 gespeichert wird.
    //
    // Dieser Fehler wirkt sich auf auf die Potenzberechnung aus (1+0)^jahre fuehrt immer
    // dazu, dass als Ergebnis 1 zurueckgeliefert wird.

    return 0;
}
