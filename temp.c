/*---------------------------------------------------------------------------
* Technische Hochschule Ingolstadt
* Fakult�t Elektrotchnik und Informatik - Elektrotechnik und Elektromobilit�t
*----------------------------------------------------------------------------
* Thema: Vorf�hraufgabe bruch.c
* Autor: Bauer Lukas
* Datum: 15.11.2020
*----------------------------------------------------------------------------
* Modulbeschreibung:
* Das Programm liest zwei rationale Zahlen als Bruch ein, verrechnet diese
* mit einer gew�nschten Rechenoperation anschlie�end gibt das Programm
* die L�sung als ungeg�rzten Bruch und als Dezimalzahl mit zwei
* Nachkommastellen aus.
*/

#include <stdio.h>


int main(void)
{
    int     z1;      //Z�hler 1                                                         //Initialisierung und Beschreibung der Variablen
    int     n1;      //Nenner 1
    int     z2;      //Z�hler 2
    int     n2;      //Nenner 2
    char    r;       //Rechenoperator
    float   e;       //Ergebnis Flie�komma ,00
    int     ez;      //Ergebnis Z�hler
    int     en;      //Ergebnis Nenner

    printf  ("Geben Sie den Zaehler des ersten Bruchs ein: ");                          //Einlesen Bruch1
    scanf   ("%i", & z1);
    printf  ("Geben Sie den dazugehoerigen Nenner ein: ");
    scanf   ("%i", & n1);

    fflush  (stdin);

    printf  ("Geben Sie nun den Zaehler des zweiten Bruchs ein: ");                     //Einlesen Bruch2
    scanf   ("%i", & z2);
    printf  ("Geben Sie den dazugehoerigen Nenner ein: ");
    scanf   ("%i", & n2);

    fflush  (stdin);

    printf  ("Welche Rechenoperation (+, -, *, /,) wollen Sie durchfuehren? ");         //Einlesen des Rechenzeichens
    scanf   ("%c", & r);

    if (n2 == 0 || n1 == 0)                                                             //Fehler�berpr�fung
    {
        printf ("Nenner darf nicht 0 sein!");                                           //Fehler�berpr�fung ob 0 im Nenner
        return 0;
    }

    if (r=='+');                                                                        //Fehler�berpr�fung auf g�ltiges Rechenzeichen
    else if (r=='-');
    else if (r=='*');
    else if (r=='/');
    else
    {
        printf ("\nRechenzeichen ungueltig!");
        return 0;
    }


    printf ("\nIhre Rechnung lautet: %i|%i %c %i|%i =\n\n", z1, n1, r, z2, n2);         //Ausgabe der Rechnung

    printf ("Das Ergebnis lautet:");                                                    //Beginn Ergebnisausgabe

    if (r =='+')                                                                        //Addition zweier Br�che
    {
        if (n1==n2)                                                                     //Addition bei gleichem Nenner
        {
            printf (" %i|%i\n", ez= z1+ z2, en=n1);                                     //Ergebnisausgabe
            printf ("Gekuerztes Ergebnis: %.2f\n", e= (float)ez/ (float)en);            //Ergebnis 2 Nachkommastellen
        }
        else                                                                            //Addition Nenner ungleich
        {
            int gn= n1* n2;
            z1= gn/ n1* z1;
            z2= gn/ n2* z2;
            printf (" %i|%i\n", ez= z1+ z2, en=gn);                                     //Ergebnisausgabe
            printf ("Gekuerztes Ergebnis: %.2f\n", e= (float)ez/ (float)en);            //Ergebnis 2 Nachkommastellen
        }
    }

    if (r=='-')                                                                         //Subtraktion zweier Br�che
    {
         if (n1==n2)                                                                    //Subtraktion bei gleichem Nenner
        {
            printf (" %i|%i\n", ez= z1- z2, en=n1);                                     //Ergebnisausgabe
            printf ("Gekuerztes Ergebnis: %.2f\n", e= (float)ez/ (float)en);            //Ergebnis 2 Nachkommastellen
        }
        else                                                                            //Subtraktion Nenner ungleich
        {
            int gn= n1* n2;
            z1= gn/ n1* z1;
            z2= gn/ n2* z2;
            printf (" %i|%i\n", ez= z1- z2, en=gn);                                     //Ergebnisausgabe
            printf ("Gekuerztes Ergebnis: %.2f\n", e= (float)ez/ (float)en);            //Ergebnis 2 Nachkommastellen
        }
    }

    if (r=='*')                                                                         //Multiplikation zweier Br�che
    {
        printf (" %i|%i\n", ez= z1* z2, en= n1* n2);                                    //Ergebnisausgabe
        printf ("Gekuerztes Ergebnis: %.2f\n", e= (float)ez/ (float)en);                //Ergebnis 2 Nachkommastellen
    }

    if (r=='/')                                                                         //Division zweier Br�che
    {
        printf ("%i|%i\n", ez= z1* n2, en= n1* z2);                                     //Ergebnisausgabe
        printf ("Gekuerztes Ergebnis: %.2f\n", e= (float)ez/ (float)en);                //Ergebnis 2 Nachkommastellen
    }

    return 0;
}
